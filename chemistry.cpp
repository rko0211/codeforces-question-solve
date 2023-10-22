#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }

  n-=k;
  int cnt=0;
  for(auto &it:m){
    if(it.second%2==1){
        cnt++;
    }
  }
  if(n%2==1){
    cnt--;
  }
  if(cnt<=k){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }

}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}