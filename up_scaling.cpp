#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  char has[2][2];
  char dot[2][2];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      has[i][j] = '#';
      dot[i][j] = '.';
    }
  }
  int v = 2 * n;
  char ans[v][v];
  bool flag = false;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      flag = false;
    }
    else
    {
      flag = true;
    }
    if (!flag)
    {
      bool flag1 = false;

      int p = 0;
      while (p < 2 * n)
      {
        if (!flag1)
        {
          cout << "##";

          flag1 = true;
        }
        else
        {
          cout << "..";
          flag1 = false;
        }
        p += 2;
      }
      cout << endl;
      p = 0;
      flag1 = false;
      while (p < 2 * n)
      {
        if (!flag1)
        {
          cout << "##";

          flag1 = true;
        }
        else
        {
          cout << "..";
          flag1 = false;
        }
        p += 2;
      }
      cout << endl;
    }

    else
    {
      int p = 0;
      bool flag1 = false;
      while (p < 2 * n)
      {
        if (!flag1)
        {
          cout << "..";

          flag1 = true;
        }
        else
        {
          cout << "##";
          flag1 = false;
        }
        p += 2;
      }
      cout << endl;
      p = 0;
      flag1 = false;
      while (p < 2 * n)
      {
        if (!flag1)
        {
          cout << "..";

          flag1 = true;
        }
        else
        {
          cout << "##";
          flag1 = false;
        }
        p += 2;
      }
      cout << endl;
      flag = true;
    }
  }
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