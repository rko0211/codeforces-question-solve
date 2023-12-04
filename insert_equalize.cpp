#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n; cin>>n;
    ll a[n];  for(int i=0;i<n;i++)cin>>a[i];
    if(n==1){
        cout<<1<<endl;
        return;
    }
    sort(a,a+n);

    ll ans = LLONG_MAX;
    ll gcdval = (a[n-1]-a[0]);
    
    for(int i=1;i<n;i++){
      gcdval = __gcd(gcdval,(a[n-1]-a[i]));
    }
    ll sum =0;
   
    for(int i=0;i<n;i++){
        
        sum+=((a[n-1]-a[i])/gcdval);
    }
    ll val = (a[n-1]-gcdval);
    sum++;
    unordered_map<int,int>um;
    for(int i=0;i<n;i++){
        um[a[i]]++;
    }
    while(true){
        if(um[val]==0){
            break;
        }
        val-=gcdval;
        sum++;
    }
    // while(true){
    //     bool flag = false;
    //     for(int i=0;i<n;i++){
    //         if(a[i]==val){
    //             flag= true;
    //             break;
    //         }
    //     }
    //     if(flag==false){
    //      break;
    //     }
    //     val-=gcdval;
    //     sum++;
    // }

    ans = min(ans,sum);
    // cout<<gcdval<<endl;
// ll lo = a[n-1]+1;
// ll hi = 1000000000;
// while(lo<hi){
//     ll mid = (lo+(hi-lo)/2);
//     ll gc =(mid-a[0]);
//     for(int i=1;i<n;i++){
//       gc = __gcd(gc,(mid-a[i]));
//     }
//     sum =0;
  
//     for(int i=0;i<n;i++){
        
//         sum+=((mid-a[i])/gc);
//     }
//     if(ans<=sum){
//         hi = mid-1;
//     }
//     else{
//         // ans > sum;
//         ans = min(ans,sum);
//         lo = mid+1;
//     }

// }
cout<<ans<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}