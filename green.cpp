#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n; cin>>n;
    ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
  vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        vp.push_back({a[i],i});
    }
    sort(vp.begin(),vp.end());
    reverse(vp.begin(),vp.end());

    ll ans[n];

    ll f =1;
   
    for(int i=0;i<vp.size();i++){
      ans[vp[i].second] = f;
        f++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;


}

int main(){


int t; cin>>t;
while(t--){
    solve();
}
    return 0;
}