#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  string s;
  cin >> s;
  long long int pref[n];
  pref[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    pref[i] = (pref[i - 1] + a[i]);
  }

  long long sum = 0;
  int lo = 0;
  int hi = n - 1;
  while (lo < hi)
  {

    if (s[lo] == 'L' && s[hi] == 'R')
    {

      if (lo >= 1)
      {
        sum += (pref[hi] - pref[lo - 1]);
      }
      else
      {
        sum += pref[hi];
      }

      lo++;
      hi--;
    }

    else
    {
      if (s[lo] != 'L')
      {
        lo++;
      }
      if (s[hi] != 'R')
      {
        hi--;
      }
    }
  }
  cout << sum << endl;
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