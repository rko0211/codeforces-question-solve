#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; cin>>n;
ll val2 = n;
ll val=0 ;
n>>=1;
ll i = 2;
    while(n>0){
      val+=((n&1)*i);
      i*=2;
      n>>=1;
    }

    cout<<val<<" "<<val2<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}
    return 0;
}