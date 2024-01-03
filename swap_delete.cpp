#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    int one =0;
    int zero =0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            zero++;
        }
        else{
            one++;
        }
    }
    if(zero==one){
        cout<<0<<endl;
    }
    else{
        string t ="";
      if(one>zero){
        for(int i=0;i<s.size();i++){
          if(s[i]=='1' && zero>0){
            t+='0';
            zero--;
          }
          else{
              t+='1';
              one--;
          }
        }
      }
      else{
        for(int i=0;i<s.size();i++){
          if(s[i]=='0' && one>0){
            t+='1';
            one--;
          }
          else{
              t+='0';
              zero--;
          }
        }
      }
    //   cout<<t<<endl;
    
      int i=0,j=0;
      int ans =0;
      while(i<s.size() && j<t.size()){
        if(s[i]!=t[j]){
            i++;
            j++;
        }
        else{
           ans++;
           j++;
        }
      }
     
      cout<<ans<<endl;
    }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}