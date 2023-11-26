#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
  ll ans =0;
  ans+=(a[0]-1);
  for(int i=1;i<n;i++){
    
        ans+=max((a[i]-a[i-1]),0LL);
    
  }
    cout << ans << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
        /* code */
    }

    return 0;
}