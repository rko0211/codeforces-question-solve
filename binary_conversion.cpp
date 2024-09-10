#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  string s, t;
  cin >> s >> t;
  int o1 = 0, z1 = 0, o2 = 0, z2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      z1++;
    }
    else
    {
      o1++;
    }
    if (t[i] == '0')
    {
      z2++;
    }
    else
    {
      o2++;
    }
  }
  if (z1 != z2 || o1 != o2)
  {
    cout << "NO\n";
    return;
  }
  // cout << o1 << " " << z1 << " " << o2 << " " << z2 << endl;
  int dif = 0;
  int same = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] != t[i])
    {
      dif++;
    }
    else
    {
      same++;
    }
  }
  same += dif;
  dif /= 2;
  k -= dif;
  if (k < 0)
  {
    cout << "NO\n";
    return;
  }
  if (k % 2 == 0)
  {
    cout << "YES\n";
    return;
  }
  else
  {
    // K odd
    if (o1 >= 2 || z1 >= 2)
    {
      cout << "YES\n";
      return;
    }
    else
    {
      cout << "NO\n";
      return;
    }
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