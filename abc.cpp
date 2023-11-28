#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int c =0;
    int ans =INT_MIN;
  for(int i=0;i<n;i++){
    if(s[i]=='.'){
        c++;
    }
    else{
        ans = max(ans,c);
        c = 0;
    }
  }
   ans = max(ans,c);
   if(ans>=3){
    cout<<2<<endl;
   }
   else{
    cout<<count(s.begin(),s.end(),'.')<<endl;
   }





}

int main(){


int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}