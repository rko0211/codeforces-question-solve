#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, c, d;
  cin >> n >> c >> d;
  ll a[(n * n)];
  for (int i = 0; i < (n * n); i++)
    cin >> a[i];
  map<ll, ll> m1, m2;
  ll mini = LLONG_MAX;
  for (int i = 0; i < (n * n); i++)
  {
    m1[a[i]]++;
    mini = min(mini, a[i]);
  }
  ll x = 0;
  for (int i = 0; i < n; i++)
  {
    ll val = mini;
    val += x;
    m2[val]++;
    for (int j = 1; j < n; j++)
    {
      val += d;
      m2[val]++;
    }
    x += c;
  }

  bool flag = false;
  for (auto &it : m1)
  {
    // cout << it.first << " ";
    // cout << it.second << " " << m2[it.first] << endl;
    if (it.second != m2[it.first])
    {
      flag = true;
      break;
    }
  }
  if (flag)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
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