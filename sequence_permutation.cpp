#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll m = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    map<ll, ll> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
 
   
  ll ans=0; ll size=1; ll count=1;
  while(mp[size]!=0)
  {
    // Each time count is updated with its prefix value;
    count = (count%m)*(mp[size]%m);
    ans = ans%m + count%m;
    ans=ans%m;
    count%=m;
    size++;
  }
    cout<<ans<<endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}