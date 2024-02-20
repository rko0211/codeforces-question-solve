#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  unordered_map<ll, int> um;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    um[a[i]]++;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    ll val = a[i];
    if (um[val] > 0)
    {
      ll temp = 0;
      um[val]--;
      for (int j = 0; j < 31; j++)
      {
        if (!(val & (1 << j))) // if the j-th bit of val is not set
        {
          temp |= (1 << j); // set the j-th bit of temp
        }
      }

      if (um[temp] > 0)
      {
        um[temp]--;
      }

      ans++;
    }
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
  }
  return 0;
}
