#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  string s;
  cin >> s;
  int sz = s.size();
  int i = 0;
  int j = sz - 1;
  string ans = s;
  while (i < j)
  {

    if (s[i] != s[j])
    {
      if (s[i] > s[j])
      {
        string str = s;
        reverse(s.begin(), s.end());
        cout << (s + str) << endl;
        return;
      }
      else
      {
        break;
      }
    }
    i++;
    j--;
  }
  cout << ans << endl;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    solve();
  }

  return 0;
}