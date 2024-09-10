#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n);
  ll pref[n];
  pref[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = (pref[i - 1] + a[i]);
  }
  ll suf[n];
  suf[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = (a[i] + suf[i + 1]);
  }

  int i = 1;
  int j = n - 1;
  while (i < j)
  {
    if (pref[i] < suf[j] && (i + 1) > (n - j))
    {
      cout << "YES\n";
      return;
    }
    while (suf[j] <= pref[i])
    {
      j--;
    }
    while ((i + 1) <= (n - j))
    {
      i++;
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