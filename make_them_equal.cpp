#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  char ch;
  cin >> ch;
  string s;
  cin >> s;
  bool oddflag = false;
  bool evenflag = false;
  bool flag = false;
  int val;
  for (int i = 0; i < n; i++)
  {
    if (s[i] != ch)
    {
      oddflag = true;
    }
    if (s[i] == ch && i >= (n / 2))
    {
      flag = true;
      val = i + 1;
      break;
    }
  }

  if (!oddflag)
  {
    cout << 0 << endl;
    return;
  }
  if (flag && oddflag)
  {
    cout << 1 << endl;
    cout << val << endl;
  }

  else
  {
    cout << 2 << endl;
    cout << (n / 2) << " " << 1 << endl;
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