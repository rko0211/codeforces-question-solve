#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  int cnt = 0;
  while (n > 1)
  {
    if (n == 1)
    {
      break;
    }
    if (n % 6 == 0)
    {
      n /= 6;
      cnt++;
    }
    else
    {
      n *= 2;
      cnt++;
    }
  }

  if (n == 1)
  {
    cout << cnt << endl;
  }
  else
  {
    cout << -1 << endl;
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