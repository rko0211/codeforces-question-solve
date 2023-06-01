#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;  cin>>a>>b;
    string ans ="";
    bool flag =true;
  while(b>0 && a>0){
    if(flag){
        ans+='0';
        flag =false;
        a--;
    }
    else{
         ans+='1';
         flag =true;
          b--;
    }
   
  }
  while(a--){
     ans+='0';
  }
    while(b--){
     ans+='1';
  }
  cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}