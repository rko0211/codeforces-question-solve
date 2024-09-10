#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  if (n % 2 == 1)
  {
    cout << "YES\n";
    return;
  }
  else
  {
    while (n > 1)
    {
      if (n % 2 == 1)
      {
        cout << "YES\n";
        return;
      }
      n /= 2;
    }
  }
  if (n % 3 == 0)
  {
    cout << "YES\n";
    return;
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