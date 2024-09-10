#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, d;
  cin >> n >> d;
  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < d; i++)
  {
    string s;
    cin >> s;
    bool flag = false;
    for (int j = 0; j < s.size(); j++)
    {
      if (s[j] == '0')
      {
        flag = true;
        break;
      }
    }

    if (flag)
    {
      cnt++;
      ans = max(ans, cnt);
    }
    else
    {
      cnt = 0;
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}