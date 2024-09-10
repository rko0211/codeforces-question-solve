#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  bool zero = false;
  bool nonzero = false;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 0)
    {
      zero = true;
    }
    if (a[i] > 0)
    {
      nonzero = true;
    }
  }

  if (!zero)
  {
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
      cout << (i + 1) << " " << (i + 1) << endl;
    }
    return;
  }
  if (!nonzero)
  {
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
      cout << (i + 1) << " " << (i + 1) << endl;
    }
    return;
  }
  int dummy[n];
  for (int i = 0; i < n; i++)
  {
    dummy[i] = a[i];
  }
  sort(dummy, dummy + n);
  int mex = 0;
  for (int i = 0; i < n; i++)
  {
    if (dummy[i] == mex)
    {
      mex++;
    }
  }
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }
  for (int i = 0; i < mex; i++)
  {
    if (m[i] <= 1)
    {
      cout << -1 << endl;
      return;
    }
  }
  int lo = 1;
  int hi;
  int i = 0;
  for (int j = 0; j < n; j++)
  {

    if (a[i] == i)
    {
      i++;
      if (i == mex)
      {
        hi = j + 1;
        break;
      }
    }
  }
  i = 0;
  int cnt = 0;
  for (int j = hi; j < n; j++)
  {

    if (a[i] == i)
    {
      i++;
      cnt++;
      if (i == mex)
      {
        break;
      }
    }
  }
  if (cnt == mex)
  {
    cout << 2 << endl;
    cout << lo << " " << hi << endl;
    cout << (hi + 1) << " " << n << endl;
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