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
  int m;
  cin >> m;
  ll pref[n];
  pref[0] = 0;
  pref[1] = 1;
  for (int i = 1; i < n - 1; i++)
  {
    if (abs(a[i] - a[i - 1]) <= abs(a[i] - a[i + 1]))
    {
      pref[i + 1] = abs(a[i] - a[i + 1]);
    }
    else
    {
      pref[i + 1] = 1;
    }
  }
  ll p2[n];
  p2[0] = 0;
  for (int i = 1; i < n; i++)
  {
    p2[i] = (p2[i - 1] + pref[i]);
  }

  ll pref1[n];
  pref1[n - 1] = 0;
  pref1[n - 2] = 1;
  for (int i = n - 2; i > 0; i--)
  {
    if (abs(a[i] - a[i + 1]) <= abs(a[i] - a[i - 1]))
    {
      pref1[i - 1] = abs(a[i] - a[i - 1]);
    }
    else
    {
      pref1[i - 1] = 1;
    }
  }

  ll p3[n];
  p3[n - 1] = 0;

  for (int i = n - 2; i >= 0; i--)
  {
    p3[i] = (pref1[i] + p3[i + 1]);
  }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << p3[i] << " ";
  // }
  // cout << endl;
  while (m--)
  {
    int x, y;
    cin >> x >> y;
    if (x < y)
    {
      cout << p2[y - 1] - p2[x - 1] << endl;
    }
    else
    {
      cout << p3[y - 1] - p3[x - 1] << endl;
    }
  }
  // cout << endl;
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