#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n][3];
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    int cnt = 0;
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == 1)
      {
        cnt++;
      }
    }
    if (cnt >= 2)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}