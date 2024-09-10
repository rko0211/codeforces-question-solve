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
  unordered_map<ll, ll> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]]++;
  }
  int sz = n;
  vector<vector<ll>> pref(n + 1, vector<ll>(n));
  for (int i = 0; i < n; i++)
  {
    pref[0][i] = a[i];
  }

  for (int x = 1; x <= n; x++)
  {
    unordered_map<ll, ll> mp1;
    for (int i = 0; i < n; i++)
    {
      mp1[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {

      a[i] = mp1[a[i]];
      pref[x][i] = a[i];
    }
  }
  // for (int i = 0; i < x; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     cout << pref[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  int q;
  cin >> q;
  while (q--)
  {
    int p;
    ll k;
    cin >> p >> k;
    p--;
    if (k > n)
    {

      cout << pref[n][p] << endl;
    }
    else
    {
      cout << pref[k][p] << endl;
    }
  }
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