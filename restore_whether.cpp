#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    ll n,k ;  cin>>n>>k;
    ll a[n];  for(int i=0;i<n;i++) cin>>a[i];
    ll b[n];  for(int i=0;i<n;i++) cin>>b[i];
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        vp.push_back({a[i],i});
    }
    sort(vp.begin(),vp.end());
    sort(b,b+n);
    vector<ll>ans(n);
    for(int i=0;i<n;i++){
        ans[(vp[i].second)]=b[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}