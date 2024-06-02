#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a[3][2];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> a[i][j];
    }
  }

  for (int i = 1; i <= 100; i++)
  {
    if (i % 3 == 1)
    { // 1 to 2
      int val = (a[0][1] + a[1][1]);
      int dif = abs(a[1][0] - val);
      if (val > a[1][0])
      {
        a[0][1] = (val - a[1][0]);
      }
      else
      {
        a[0][1] = 0;
      }

      a[1][1] = min(val, a[1][0]);
    }
    else if (i % 3 == 2)
    { // 2 to 3

      int val = (a[1][1] + a[2][1]);
      int dif = abs(a[2][0] - val);
      if (val > a[1][0])
      {
        a[1][1] = (val - a[2][0]);
      }
      else
      {
        a[1][1] = 0;
      }
      a[2][1] = min(val, a[2][0]);
    }
    else
    {
      // 3 to 1
      int val = (a[2][1] + a[0][1]);
      int dif = abs(a[0][0] - val);
      if (val > a[0][0])
      {
        a[2][1] = (val - a[0][0]);
      }
      else
      {
        a[2][1] = 0;
      }
      a[0][1] = min(val, a[0][0]);
    }
  }

  cout << a[0][1] << endl;
  cout << a[1][1] << endl;
  cout << a[2][1] << endl;
}
int main()
{

  solve();

  return 0;
}