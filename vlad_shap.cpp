#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  char a[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }

  int prev = 0;
  int present = 0;
  for (int i = 0; i < n; i++)
  {
    int onecnt = 0;
    bool rowexist = false;

    for (int j = 0; j < n; j++)
    {
      if (a[i][j] == '1')
      {
        rowexist = true;
        onecnt++;
      }
    }
    if (rowexist)
    {
      if (prev == 0)
      {
        prev = onecnt;
      }
      else
      {
        present = onecnt;
        if (prev == present)
        {
          cout << "SQUARE\n";
          return;
        }
      }
    }
    else
    {
      prev = 0;
      present = 0;
    }
  }
  cout << "TRIANGLE\n";
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