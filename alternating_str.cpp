#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 1)
  {
    cout << 0 << endl;
    return;
  }
  else if (n == 2)
  {
    if (s[0] != s[1])
    {
      cout << 0 << endl;
    }
    else
    {
      cout << 1 << endl;
    }
    return;
  }
  int cnt = 0;
  for (int i = 1; i < n; i++)
  {
    if (s[i] == s[i - 1])
    {
      cnt++;
    }
  }
  cout << cnt << endl;
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