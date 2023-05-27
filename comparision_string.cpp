#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; cin>>n;
    string s; cin>>s;
 int ans=0; int count1 =0,count2=0;
//  bool flag=true;
 for(int i=0;i<n;i++){
 
 if(s[i]=='>'){
    count1++;
    count2=0;
 }
 else{
    count2++;
    count1=0;
 }
//  Lenfth of longest contiguous subsegment having same charecter
 ans = max(ans, max(count1,count2));

 }
 cout<<(ans+1)<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}