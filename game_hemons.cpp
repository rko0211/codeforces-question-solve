#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;cin>>n;
    ll h;
    cin>>h;
    ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
 
    sort(a,a+n,greater<ll>());
//    ll st = 1 ;
//    ll end = h;
//    ll ans=INT_MAX;
//    while(st<end){
//     ll mid = st + (end-st)/2;
//     ll x = mid;
//     ll y = mid-1;
// // cout<<x<<" "<<y<<" ";
//     if(((a[0]*x) + (a[1]*y))>=h && ans>(x+y)){
//         ans = x+y;
//         end = mid;
       
//     }

//     else{
//         if((a[0]*x + a[1]*y <h) && y==0){
//             y++;
//         }
//         if(((a[0]*x) + (a[1]*y))>=h){
//         ans = x+y;
       
//          }

//         st = mid+1;
//     }
//     // cout<<ans<<endl;
//    }

// // cout<<endl;

// if(ans>h && (ans-a[1])>=h){
//     ans--;
// }
//    cout<<ans<<endl;
ll ans = 2*(h/(a[0]+a[1]));
if(h%(a[0]+a[1])==0){
    cout<<ans<<endl;
    return;
}
if(h%(a[0]+a[1])<=a[0]){
    ans++;
}
else{
    ans+=2;
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