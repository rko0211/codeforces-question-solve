#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
ll n,m; cin>>n>>m;
ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
ll b[m]; for(int i=0;i<m;i++) cin>>b[i];
ll pref[n];
pref[0]=a[0];
for(int i=1;i<n;i++){
    pref[i] = pref[i-1]+a[i];
}
for(int i=0;i<m;i++){
    ll val = b[i];
    ll ind = lower_bound(pref,pref+n,val)-pref;
    if(ind>0)
    cout<<(ind+1)<<" "<<(val-pref[ind-1])<<endl;
    else{
        cout<<(ind+1)<<" "<<(val)<<endl;
    }
}
}
int main(){

    solve();


    return 0;
}