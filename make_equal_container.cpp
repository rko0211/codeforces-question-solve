#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  ll avg = (sum / n);
  ll extra = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > avg)
    {
      ll val = (a[i] - avg);
      extra += val;
      a[i] -= val;
    }
    else
    {
      ll val = (avg - a[i]);
      a[i] += val;
      extra -= val;
      if (extra < 0 || val < 0)
      {
        cout << "NO\n";
        return;
      }
    }
  }
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] != a[i + 1])
    {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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