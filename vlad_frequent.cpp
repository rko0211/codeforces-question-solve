#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int cntA = 0, cntB = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'A')
    {
      cntA++;
    }
    else
    {
      cntB++;
    }
  }
  if (cntA >= cntB)
  {
    cout << "A\n";
  }
  else
  {
    cout << "B\n";
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