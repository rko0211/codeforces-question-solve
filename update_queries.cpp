#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  int ind[m];
  for (int i = 0; i < m; i++)
  {
    cin >> ind[i];
  }
  string c;
  cin >> c;
  sort(ind, ind + m);
  sort(c.begin(), c.end());
  // reverse(c.begin(), c.end());
  map<int, int> mp;
  for (int i = 0; i < m; i++)
  {
    mp[ind[i]]++;
  }
  int x = 0;
  int y = m - 1;
  for (int i = 0; i < n; i++)
  {
    if (mp[(i + 1)] > 0)
    {
      int val = mp[(i + 1)] - 1;
      // cout << (i + 1) << endl;
      while (y > 0 && val > 0)
      {
        y--;
        val--;
      }
      // cout << c[x] << " ";
      s[i] = c[x];
      x++;
    }
  }

  cout << s << endl;
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