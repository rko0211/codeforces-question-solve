#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int ans = 0;
  ans += min(n, 9);
  if (n > 9)
  {
    string s = "11";
    int val = stoi(s);
    int deg = 2;
    for (int i = 11; i <= n;)
    {
      // cout << i << " " << val << endl;
      deg = 0;

      int v = i;

      while (v > 0)
      {
        deg++;

        v /= 10;
      }
      if (deg == (s.size() + 1))
      {
        s += '1';
        val = stoi(s);
        i = val;
      }
      else
      {
        i += val;
        ans++;
      }
    }
  }
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