#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  if (n <= 10)
  {
    cout << "NO\n";
    return;
  }
  ll pref[10];
  pref[1] = 11;
  for (int i = 2; i <= 9; i++)
  {
    pref[i] = (pow(10, i)) + pref[i - 1];
  }
  for (int i = 1; i <= 9; i++)
  {
    ll x = n;
    x %= pref[i];
    for (int j = 1; j <= 9; j++)
    {
      if (x % pref[j] == 0)
      {
        cout << "YES\n";
        return;
      }
    }
  }
  cout << "NO\n";
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