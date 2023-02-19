#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];

 int ans=0;
 ll l=-1; ll r=1e9+9;
 for(int i=0;i<n;i++)
 {
    if(a[i]-x >r || a[i]+x <l )
    {
        ans++;
        l=a[i]-x;
        r=a[i]+x;
    }
    else
    {
        l=max(l,a[i]-x);
        r=min(r,a[i]+x);
    }
 }
 cout<<ans<<endl;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}


    return 0 ;
}