#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n; cin>>n;
    ll a[n]; for(int i=0;i<n;i++)cin>>a[i];
    ll ans = 0;
    ans+=(a[0]-1);
    ll temp = a[0];
    ll x = 0;
    for(int i=1;i<n;i++){
        if(a[i]==0){
            ans++;
        }
        else if(a[i]>temp){
          ans+=(a[i]-1-x);
          x+=(a[i]-1-x);
        }
    }
    cout<<ans<<endl;

}
int main(){

int t; cin>>t;
while (t--)
{
    solve();
    /* code */
}


    return 0;
}