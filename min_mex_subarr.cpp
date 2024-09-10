#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;

  int a[n];
  int b[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }
  int mex = 0;
  sort(b, b + n);
  for (int i = 0; i < n; i++)
  {
    if (b[i] == mex)
    {
      mex++;
    }
  }
  int ans = n;

  vector<int> ind;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == 0)
    {
      ind.push_back(i);
    }
  }

  for (int i = 0; i < ind.size(); i++)
  {
    int zindex = ind[i];
    int j1 = max(0, zindex - 1);
    int j2 = min(n - 1, (zindex + 1));
    int val1 = mex;
    int val2 = mex;
    int cnt1 = 1;
    int cnt2 = 1;

    unordered_map<int, bool> m1, m2;
    m1[0] = true;
    for (int j = j1; j >= 0; j--)
    {

      if (mex > a[j] && m1[a[j]] == false)
      {

        cnt1++;
        m1[a[j]] = true;
        if (cnt1 == val1)
        {
          ans = min(ans, ((zindex - j + 1)));
          break;
        }
      }
    }
    if (cnt1 == val1)
      ans = min(ans, ((zindex + 1)));
    int l;
    m2[0] = true;
    for (int j = j2; j < n; j++)
    {

      if (mex > a[j] && m2[a[j]] == false)
      {

        cnt2++;
        m2[a[j]] = true;
        if (cnt2 == val1)
        {
          l = j;
          ans = min(ans, ((j - zindex + 1)));
          break;
        }
      }
    }
    if (cnt2 == val2)
      ans = min(ans, (((n - 1) - zindex + 1)));

    unordered_map<int, bool> m;
    int cnt = 1;
    while (cnt != mex && j1 >= 0 && j2 < n)
    {
      if (j1 > 0)
      {
        if (mex > a[j1] && m[a[j1]] == false)
        {
          cnt++;
          m[a[j1]] = true;
        }
        j1++;
      }
      if (j2 < n)
      {
        if (mex > a[j2] && m[a[j2]] == false)
        {
          cnt++;
          m[a[j2]] = true;
        }
        j2++;
      }
    }
    if (cnt == mex)
      ans = min(ans, (j2 - j1 + 1));
  }
  cout << ans << endl;
}
int main()
{
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int t;
  cin >> t;
  while (t--)
  {
    solve();
    /* code */
  }

  return 0;
}
