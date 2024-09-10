#include <bits/stdc++.h>
using namespace std;
void solve()
{
  long long int n;
  cin >> n;
  vector<pair<int, int>> ans;
  for (long long int i = 1; i <= 10000; i++)
  {
    for (long long int j = 1; j < i; j++)
    {
      long long val = n * i - j;
      while (val > 0)
      {
        if (val % 10)
      }
    }
  }
  cout << ans.size() << endl;
  for (auto &it : ans)
  {
    cout << it.first << " " << it.second << endl;
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