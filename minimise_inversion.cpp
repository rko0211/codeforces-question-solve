#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string f(string s, int lo, int rz)
{
  int c1 = 0, c2 = 0;
  for (int i = 0; i < s.size() && lo > 0; i++)
  {
    if (s[i] == '1')
    {
      s[i] = '0';
      lo--;
    }
  }
  for (int j = s.size() - 1; j >= 0 && rz > 0; j--)
  {
    if (s[j] == '0')
    {
      s[j] = '1';
      rz--;
    }
  }
  return s;
}
int invno(string &str)
{
  int cnt = 0;
  int inv = 0;
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == '1')
    {
      cnt++;
    }
    else
    {
      inv += cnt;
    }
  }
  return inv;
}
void solve()
{

  int n, k;
  cin >> n >> k;

  string s;
  cin >> s;
  int ans = INT_MAX;
  for (int i = 0; i <= k; i++)
  {
    int lo = i;
    int rz = (k - i);
    string news = f(s, lo, rz);
    int l = invno(news);
    ans = min(ans, l);
  }
  cout << ans << endl;
}

int main()
{

  // your code goes here

  int t;
  cin >> t;

  while (t--)
  {

    solve();
  }

  return 0;
}
