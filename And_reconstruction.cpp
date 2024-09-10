#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll f(string &s)
{
  ll val = 0;

  for (int i = 0; i < s.size(); i++)
  {
    val += ((s[i] - '0') * pow(2, i));
  }
  return val;
}
void solve()
{
  ll n;
  cin >> n;
  ll b[n - 1];
  for (int i = 0; i < n - 1; i++)
  {
    cin >> b[i];
  }
  ll a[n];
  a[0] = b[0];
  for (int i = 1; i < n - 1; i++)
  {
    a[i] = (b[i] | b[i - 1]);
  }
  a[n - 1] = b[n - 2];
  bool f = false;
  for (int i = 0; i < n - 1; i++)
  {
    if (b[i] != (a[i] & a[i + 1]))
    {
      f = true;
      break;
    }
  }
  if (f)
  {
    cout << -1 << endl;
    return;
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
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