#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  char a[n][4];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = n - 1; i >= 0; i--)
  {
    for (int j = 0; j < 4; j++)
    {
      if (a[i][j] == '#')
      {
        cout << (j + 1) << " ";
        break;
      }
    }
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