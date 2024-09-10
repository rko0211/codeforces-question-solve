#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  long long a[n];
  long long b[n];
  long long c[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    c[i] = a[i];
  }
  for (int j = 0; j < n; j++)
    cin >> b[j];

  vector<bool> flag1(n, false);
  vector<bool> flag2(n, false);

  int ind;
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (maxi < b[i])
    {
      ind = i;
      maxi = b[i];
    }
  }
  int activity = 0;
  int ind1 = 0;
  for (int i = ind; i > 0; i--)
  {
    if (abs(a[i] - a[i - 1]) <= b[i])
    {
      flag1[i] = true;
      flag1[i - 1] = true;
      a[i - 1] += b[i - 1];
    }
    else
    {
      activity++;
      ind1 = i;
      break;
    }
  }
  for (int i = 0; i < ind1 - 1; i++)
  {
    if (abs(a[i] - a[i + 1]) <= max(b[i], b[i + 1]))
    {
      flag1[i] = true;
      flag1[i + 1] = true;
      a[i + 1] += b[i + 1];
    }
    else
    {
      activity++;
      ind1 = i;
      break;
    }
  }
  if (activity < 2)
  {
    int p = 0;
    int t1 = -1, t2 = -1;
    for (int i = n - 1; i > ind; i--)
    {
      if (t1 != -1)
        t1 = a[i];
      t2 = a[i - 1];
      if (abs(t1 - t2) <= b[i])
      {
        flag1[i] = true;
        flag1[i - 1] = true;
        t2 += b[i - 1];
        t1 = t2;
      }
      else
      {
        p++;
        ind1 = i;
        break;
      }
    }

    for (int i = ind + 1; i < n - 1; i++)
    {
      if (abs(a[i] - a[i + 1]) <= max(b[i], b[i + 1]))
      {
        flag1[i] = true;
        flag1[i + 1] = true;
        a[i + 1] += b[i + 1];
      }
      else
      {
        activity++;
        ind1 = i;
        break;
      }
    }
  }

  activity = 0;
  ind1 = 0;
  for (int i = ind; i < n - 1; i++)
  {
    if (abs(c[i] - c[i + 1]) <= b[i])
    {
      flag2[i] = true;
      flag2[i - 1] = true;
      c[i - 1] += b[i + 1];
    }
    else
    {
      activity++;
      ind1 = i;
      break;
    }
  }
  for (int i = 0; i < ind - 1; i++)
  {
    if (abs(c[i] - c[i + 1]) <= max(b[i], b[i + 1]))
    {
      flag1[i] = true;
      flag1[i + 1] = true;
      c[i + 1] += b[i + 1];
    }
    else
    {
      activity++;

      break;
    }
  }
  if (activity < 2)
  {
    int p = 0;
    int t1 = -1, t2 = -1;
    for (int i = n - 1; i > ind1; i--)
    {
      if (t1 != -1)
        t1 = c[i];
      t2 = c[i - 1];
      if (abs(t1 - t2) <= b[i])
      {
        flag2[i] = true;
        flag2[i - 1] = true;
        t2 += b[i - 1];
        t1 = t2;
      }
      else
      {
        p++;
        ind1 = i;
        break;
      }
    }

    for (int i = ind1; i < n - 1; i++)
    {
      if (abs(c[i] - c[i + 1]) <= max(b[i], b[i + 1]))
      {
        flag2[i] = true;
        flag2[i + 1] = true;
        c[i + 1] += b[i + 1];
      }
      else
      {
        activity++;
        ind1 = i;
        break;
      }
    }
  }

  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (flag1[i] == false)
    {
      cnt1++;
    }
    if (flag2[i] == false)
    {
      cnt2++;
    }
  }
  if (cnt1 <= 0 || cnt2 <= 0)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
