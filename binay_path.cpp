#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1;
  cin >> s2;
  int i1 = 1;
  int i2 = 0;
  string short_path = "";
  short_path += s1[0];
  bool flag = false;
  while (i1 < n)
  {
    if ((s1[i1] - '0') > (s2[i2] - '0'))
    {
      flag = true;
      break;
    }
    else
    {
      short_path += s1[i1];
      i1++;
      i2++;
    }
  }
  if (flag)
  {
    for (int j = i2; j < n; j++)
    {
      short_path += s2[j];
    }
  }
  else
  {
    short_path += s2[n - 1];
  }
  int cnt = 1;
  int ans = 1;
  i1 = 1;
  i2 = 0;
  while (i1 < n)
  {
    if (s1[i1] == s2[i2])
    {
      cnt++;
    }
    if (s2[i2] == '1' && s1[i1] == '0')
    {
      ans = cnt;
      cnt = 1;
    }
    else if (s2[i2] == '0' && s1[i1] == '1')
    {
      ans = cnt;
      break;
      // cnt = 1;
    }

    i1++;
    i2++;
  }
  ans = cnt;
  cout << short_path << endl;
  cout << ans << endl;
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