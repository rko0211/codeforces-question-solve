#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  int total = 0;
  int cnt1 = 0, cnt2 = 0;
  for (int i = 0; i < s1.size(); i++)
  {
    if (s1[i] != s2[i])
    {
      total++;
      if (s2[i] == '0')
      {
        cnt2++;
      }
      if (s2[i] == '1')
      {
        cnt1++;
      }

      if ((cnt2 > 0 && cnt1 > 0))
      {

        total -= 1;
        cnt2--;
        cnt1--;
      }
      // else if (cnt2 > 0)
      // {
      //   total -= 1;
      //   cnt2--;
      // }
    }
  }

  cout << total << endl;
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