#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  if ((n - (k - 1) > 0 && (n - (k - 1)) % 2 == 1))
  {
    cout << "YES\n";
    for (int i = 1; i <= k - 1; i++)
    {
      cout << 1 << " ";
    }
    cout << (n - (k - 1)) << endl;
  }
  else if ((n - (2 * (k - 1))) > 0 && (n - (2 * (k - 1))) % 2 == 0)
  {
    cout << "YES\n";
    for (int i = 1; i <= k - 1; i++)
    {
      cout << 2 << " ";
    }
    cout << (n - (2 * (k - 1))) << endl;
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