#include <bits/stdc++.h>
using namespace std;
int BS(int l, int r, int a[])
{
  while (l < r)
  {
    int mid = (l + (r - l) / 2);
    if (a[mid] != a[l] || a[mid] != a[r])
    {
      return mid;
    }
  }
}
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int pref[n];
  pref[0] = -1;
  int ind = 0;
  for (int i = 1; i < n; i++)
  {
    if (a[i] != a[i - 1])
    {
      ind = i - 1;
      while (ind >= 0)
      {
        if (a[i] != a[ind])
        {
          pref[i] = ind;
          break;
        }
        ind--;
      }
      if (ind < 0)
      {
        pref[i] = ind;
      }
    }
    else
    {
      pref[i] = pref[i - 1];
    }
  }
  int q;
  cin >> q;
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    if (pref[r] != -1 && pref[r] >= l)
    {
      cout << r + 1 << " " << pref[r] + 1 << endl;
    }
    else
    {
      cout << -1 << " " << -1 << endl;
    }
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