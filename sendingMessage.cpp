#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, f, a, b;
  cin >> n >> f >> a >> b;
  ll m[n];
  for (int i = 0; i < n; i++)
    cin >> m[i];

  ll last = 0;

  ll minutes = 0;
  for (int i = 0; i < n; i++)
  {
    if ((m[i] - last) * a < b)
    {
      minutes += (m[i] - last) * a;
    }
    else
    {
      minutes += b;
    }

    last = m[i];
  }
  if (minutes < f)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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