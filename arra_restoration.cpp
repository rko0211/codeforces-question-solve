#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, x, y;
  cin >> n >> x >> y;
  int rem = n - 2;
  int dif = y - x;

  int d = 1;
  for (int i = 1; i <= dif; i++)
  {
    if (dif % i == 0)
    {
      d = i;
      if (((dif / i) + 1) <= n)
        break;
    }
  }
  // cout << d << endl;
  vector<int> ans;
  ans.push_back(x);
  ans.push_back(y);
  n -= 2;
  // cout << n << endl;
  int l = y;
  int f = x;
  while (n > 0)
  {
    if (f < (l - d))
    {
      ans.push_back(l - d);
      l -= d;
    }
    else
    {
      break;
    }
    n--;
  }
  // cout << n << endl;
  while (n > 0)
  {

    if ((f - d) >= 1)
    {
      ans.push_back(f - d);
      f -= d;
    }
    else
    {
      break;
    }

    n--;
  }
  // cout << n << endl;
  l = y;
  while (n > 0)
  {
    ans.push_back(l + d);
    l += d;
    n--;
  }
  // cout << n << endl;
  sort(ans.begin(), ans.end());
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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