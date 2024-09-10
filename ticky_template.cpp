#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  for (int i = 0; i < n; i++)
  {
    if (s1[i] != s3[i] && s2[i] != s3[i])
    {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
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