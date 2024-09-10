#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll c;
  cin >> c;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll maxi = LLONG_MIN;
  for (int i = 0; i < n; i++)
  {
    maxi = max(maxi, a[i]);
  }
  ll pref[n];
  pref[0] = a[0] + c;

  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + a[i];
  }
  int ans[n];
  int x = 0;
  ll maxi1 = LLONG_MIN;
  for (int i = 0; i < n; i++)
  {
    if ((i - 1) >= 0 && a[i] > pref[i - 1] && a[i] >= maxi)
    {
      ans[x++] = 0;
    }
    else
    {
      if (a[i] >= maxi && a[i] > maxi1)
      {
        ans[x++] = 0;
      }
      else if (pref[i] >= maxi)
      {

        ans[x++] = i;
      }
      else
      {
        ans[x++] = i + 1;
      }
    }
    if (i == 0)
    {
      maxi1 = max(maxi1, a[i] + c);
    }
    else
      maxi1 = max(maxi1, a[i]);
  }

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
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