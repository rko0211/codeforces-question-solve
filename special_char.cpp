#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  if (n % 2 == 1)
  {
    cout << "NO\n";
    return;
  }
  char ch1 = 'A';
  char ch2 = 'B';
  string ans = "";
  bool flag = false;
  while (n > 0)
  {
    if (!flag)
    {
      ans += ch1;
      ans += ch1;
      n -= 2;
      flag = true;
    }
    else
    {
      ans += ch2;
      ans += ch2;
      n -= 2;
      flag = false;
    }
  }
  cout << "YES\n";
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