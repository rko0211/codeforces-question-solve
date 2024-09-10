#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 2)
  {
    if (s[0] == '1' && s[1] == '1')
    {
      cout << "NO\n";
      return;
    }
    else if ((s[0] == '1' && s[1] == '0') || (s[0] == '0' && s[1] == '1'))
    {
      cout << "NO\n";
      return;
    }
  }
  int one = 0;
  vector<int> ind;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      one++;
      ind.push_back(i);
    }
  }
  int v = ind.size();
  if (v % 2 == 0)
  {
    if (v == 0)
    {
      cout << "YES\n";
      return;
    }
    if (v == 2)
    {
      if ((ind[1] - ind[0]) > 1)
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
      return;
    }
    else if (v > 2)
    {
      cout << "YES\n";
    }
    return;
  }
  else
  {
    cout << "NO\n";
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