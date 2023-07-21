#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n,k; cin>>n>>k;
    ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll ans = LLONG_MAX;
    ll c =1;
    for(int i=0;i<n-1;i++){

         if(abs(a[i]-a[i+1])<=k){
            c++;
        }
        else{
            ans = min(ans,(n-c));
            c =1;
        }
    }
    ans = min(ans,(n-c));
    cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}