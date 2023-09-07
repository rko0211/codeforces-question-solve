#include<bits/stdc++.h>
using namespace std;
void solve(){
      int a,b,c; cin>>a>>b>>c;
  if(a==b){
    cout<<0<<endl;
    return;
  }
  if(max(a,b)<=c){
    cout<<1<<endl;
    return;
  }

  int dif = abs(a-b);
  int val = dif/c;
  if(dif%c!=0){
    val++;
  }
  int ans = val/2;
  if(val%2!=0){
    ans++;
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