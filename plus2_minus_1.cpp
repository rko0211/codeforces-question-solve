#include<bits/stdc++.h>
using namespace std;

void solve(){
    int y;  cin>>y;
  if(y==0){
    cout<<1<<endl;
    return;
  }
  else if(y==1){
    cout<<3<<endl;
    return ;
  }
  cout<<(2*y+y)<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}