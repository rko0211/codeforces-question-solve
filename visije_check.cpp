#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){

     ll n,k, x; cin>>n>>k>>x;

    ll sum = (n*1LL*(n+1)/2);
    if(x>sum){
        cout<<"NO\n";
        return;
    }

ll v1 = k*1LL*(k+1)/2;
if(v1>x ){
    cout<<"NO\n";
    return;
}
ll v2 = ((n-k)+1+n)*k/2;
if(v2<x){
    cout<<"NO\n";
    return;
}

else{
    cout<<"YES\n";
}


}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}