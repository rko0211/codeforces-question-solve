#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  int first = -1;
  int last;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'B' && first == -1)
    {
      first = i;
      last = i;
    }
    else if (s[i] == 'B')
    {
      last = i;
    }
  }
  cout << (last - first) + 1 << endl;
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