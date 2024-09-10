#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  string ans = "";
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
      continue;
    }
    else
    {
      ans += '.';
      if (s[i] >= 65 && s[i] <= 90)
        ans += char(((s[i] - 'A') % 65) + 97);
      else
      {
        ans += s[i];
      }
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}