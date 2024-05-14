#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s1 = "I hate it ";
  string s2 = "I love it ";
  string s3 = "I hate that ";
  string s4 = "I love that ";
  int n;
  cin >> n;
  string ans = "";
  bool flag = false;
  int x = n - 1;
  while (x--)
  {

    if (!flag)
    {
      ans += s3;
      flag = true;
    }
    else
    {
      ans += s4;
      flag = false;
    }
  }
  if (!flag)
  {
    ans += s1;
  }
  else
  {
    ans += s2;
  }
  cout << ans << endl;
}

int main()
{

  solve();

  return 0;
}