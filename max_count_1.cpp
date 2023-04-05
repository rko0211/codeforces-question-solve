#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin>>n;
    string s;   cin>>s;
    int maxcount1=INT_MIN;
    int count1=0;
 char x[n];
 x[0]='0';
 for(int i=1;i<n;i++){
   x[i] = ((x[i-1]-'0')^(s[i-1]-'0'))+'0';
 }

 for(int i=0;i<n;i++){
    if(x[i]=='1'){
        count1++;
    }
 }
 char x2[n];
 x2[0]='1';
 for(int i=1;i<n;i++){
   x2[i] = ((x2[i-1]-'0')^(s[i-1]-'0'))+'0';
 }
int count2=0;
 for(int i=0;i<n;i++){
    if(x2[i]=='1'){
        count2++;
    }
 }

cout<<max(count1,count2)<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}