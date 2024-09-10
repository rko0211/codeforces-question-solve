#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n0, n1, n2;
  cin >> n0 >> n1 >> n2;
  string s = "";
  int t = n0;
  if (n0 > 0)
  {
    s += "00";
    n0--;
    while (n0 > 0)
    {
      s += "0";
      n0--;
    }
  }
  if (n1 > 0)
  {
    if (s.size() > 0 && s.back() == '0')
      s += "1";
    else
    {
      if (t > 0)
        s += "10";
      else
      {
        s += "01";
      }
    }
    n1--;
    bool f = false;
    while (n1 > 0)
    {

      if (s.back() == '0')
      {
        s += "1";
        f = true;
      }
      else
      {
        s += "0";
        f = false;
      }
      n1--;
    }
  }
  if (n2 > 0)
  {
    if (s.size() > 0 && s.back() == '1')
    {
      s += "1";
    }
    else
    {
      s += "11";
    }
    n2--;
    while (n2 > 0)
    {
      s += "1";
      n2--;
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