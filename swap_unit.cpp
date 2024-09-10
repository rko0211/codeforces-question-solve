#include <bits/stdc++.h>
using namespace std;

void solve()
{

  string s;
  cin >> s;
  map<char, int> m;

  for (int i = 0; i < s.size(); i++)
  {
    m[s[i]]++;
  }

  int ans = INT_MAX;
  int res = INT_MAX;
  char anschar;
  for (int p = 0; p < 26; p++)
  {
    // 26 times

    char cr = char('a' + p);

    int cnt = m[cr];

    if (cnt > 0)
    {

      int conse = 0;
      int c = 0;
      for (int i = 0; i < s.size(); i++)
      {
        if (s[i] == cr)
        {
          c++;
        }
        else
        {
          conse = max(conse, c);
          c = 0;
        }
      }
      ans = max(conse, c);
      // cout << cr << " " << conse << endl;

      res = min(res, abs(m[cr] - ans));
    }
  }

  cout << res << endl;
  // cout << char('a' + 25) << endl;
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
