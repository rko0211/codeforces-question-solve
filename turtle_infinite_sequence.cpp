#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, m;
  cin >> n >> m;
  // if (m == 0)
  // {
  //   cout << n << endl;
  //   return;
  // }

  int cnt = 32;
  string s1 = "";
  string s2 = "";
  int l = max(0, (n - m));
  int r = (n + m);
  while (cnt > 0)
  {
    int val1 = (l & 1);
    int val2 = (r & 1);
    l >>= 1;
    r >>= 1;
    s1 += (val1 + '0');
    s2 += (val2 + '0');
    cnt--;
  }
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  // cout << s1 << " " << s2 << endl;
  int ind = -1;
  for (int i = 0; i < s1.size(); i++)
  {
    if (s1[i] != s2[i])
    {
      ind = i + 1;
      break;
    }
  }
  for (int i = ind; i < s1.size(); i++)
  {
    s1[i] = '1';
    s2[i] = '1';
  }
  int ans1 = 0;
  int ans2 = 0;
  int x = 0;
  for (int i = s1.size() - 1; i >= 0; i--)
  {
    ans1 += (s1[i] - '0') * pow(2, x);
    ans2 += (s2[i] - '0') * pow(2, x);
    x++;
  }
  cout << max(ans2, ans2) << endl;
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