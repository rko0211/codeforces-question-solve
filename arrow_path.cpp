#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s1, s2;
  cin >> s1 >> s2;
  if (n <= 2)
  {
    cout << "YES\n";
    return;
  }
  int i = 1;
  int j = i - 1;
  int k = i + 1;
  int p = i;
  while (i < n)
  {
    if (s1[i] == '<')
    {
      if (s2[j] == s1[i])
      {
        cout << "NO\n";
        return;
      }
      if (k < n && s2[k] == s1[i])
      {
        cout << "NO\n";
        return;
      }
      if (p != n - 1 && s2[p] == s1[p])
      {
        cout << "NO\n";
        return;
      }
    }

    i += 2;
    j = i - 1;
    k = i + 1;
    p = i;
  }
  cout << "YES\n";
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