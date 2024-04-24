#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1000000007;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a, a + n);
  ll s = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 1 || s <= 1)
      s = (((s + a[i]) % mod));
    else
    {
      s = ((s * a[i]) % mod);
    }
  }
  cout << s << endl;
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