#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  string a;
  cin >> a;
  string b;
  cin >> b;
  int i = 0;
  int j = 0;
  int cnt = 0;
  while (j < m)
  {
    if (a[i] == b[j])
    {
      i++;
      j++;
      cnt++;
    }
    else
    {
      j++;
    }
  }
  cout << cnt << endl;
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