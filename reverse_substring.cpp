#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int i = 0;
  int j = n - 1;
  bool flag = false;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] != s[i + 1])
    {
      if (s[i] > s[i + 1])
      {
        cout << "YES\n";
        cout << (i + 1) << " " << (i + 2) << endl;
        return;
      }
    }
  }
  cout << "NO\n";
}
int main()
{

  solve();

  return 0;
}