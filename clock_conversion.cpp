#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  string h = "";
  string m = "";
  h += s[0];
  h += s[1];
  m += s[3];
  m += s[4];
  bool flag = false;
  // cout << h << endl;
  int hval = stoi(h);
  if (hval >= 12)
  {
    if (hval % 12 == 0)
    {
      cout << h << ":" << m << " "
           << "PM" << endl;
    }
    else
    {
      int rem = hval % 12;
      h = to_string(rem);
      if (h.size() == 1)
      {
        h = "0" + h;
      }
      cout << h << ":" << m << " "
           << "PM" << endl;
    }
  }

  else
  {
    if (hval == 0)
    {
      h = "12";
      cout << h << ":" << m << " "
           << "AM" << endl;
    }
    else
    {
      cout << h << ":" << m << " "
           << "AM" << endl;
    }
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