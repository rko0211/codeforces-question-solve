#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  int cnt1 = 0;
  int cnt2 = 0;
  int ind = -1;
  for (int i = 0; i < s1.size(); i++)
  {
    if ((s1[i] - '0') > (s2[i] - '0'))
    {
      cnt1++;
      ind = i;
      break;
    }
    else if ((s1[i] - '0') < (s2[i] - '0'))
    {
      cnt2++;
      ind = i;
      break;
    }
  }
  if (cnt1 > 0 && ind != -1)
  {
    for (int j = ind + 1; j < s1.size(); j++)
    {
      if ((s1[j] - '0') > (s2[j] - '0'))
      {
        swap(s1[j], s2[j]);
      }
    }
  }
  else if (cnt2 > 0 && ind != -1)
  {
    for (int j = ind + 1; j < s1.size(); j++)
    {
      if ((s1[j] - '0') < (s2[j] - '0'))
      {
        swap(s1[j], s2[j]);
      }
    }
  }
  cout << s1 << endl;
  cout << s2 << endl;
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