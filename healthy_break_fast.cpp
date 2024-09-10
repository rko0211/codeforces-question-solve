#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  bool flag = false;
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == 'R')
    {
      flag = true;
    }
    else if (s[i] == 'M')
    {
      if (flag)
      {
        cout << "Yes\n";
        return;
      }
    }
  }
  cout << "No\n";
}
int main()
{

  solve();

  return 0;
}