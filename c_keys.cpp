#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m, k;
  cin >> n >> m >> k;
  vector<vector<int>> open;
  vector<vector<int>> close;
  for (int i = 0; i < m; i++)
  {
    int size;
    cin >> size;
    vector<int> v(size);
    for (int j = 0; j < size; j++)
    {
      cin >> v[j];
    }
    char f;
    cin >> f;
    if (f == 'o')
    {
      open.push_back(v);
    }
    else
    {
      close.push_back(v);
    }
  }

  vector<vector<bool>> d;
  for (int i = 0; i < open.size(); i++)
  {
    vector<bool> dummy(n, false);

    for (int j = 0; j < open[i].size(); j++)
    {
      dummy[open[i][j] - 1] = true;
    }
    d.push_back(dummy);
  }

  int maxcnt = 0;
  for (int i = 0; i < d.size(); i++)
  {
    int cnt = 0;
    for (int j = 0; j < d[i].size(); j++)
    {
      if (d[i][j] == false)
      {
        cnt++;
      }
    }
    maxcnt += cnt;
  }
  vector<vector<bool>> d1;
  for (int i = 0; i < close.size(); i++)
  {
    vector<bool> dummy(n, false);

    for (int j = 0; j < close[i].size(); j++)
    {
      dummy[close[i][j] - 1] = true;
    }
    d1.push_back(dummy);
  }

  int maxcnt1 = 0;
  for (int i = 0; i < d1.size(); i++)
  {
    int cnt = 0;
    for (int j = 0; j < d1[i].size(); j++)
    {
      if (d1[i][j] == false)
      {
        bool flag = false;
        for (int k = 0; k < d.size(); k++)
        {

          if (d[k][j] == false)
          {
            flag = true;
            break;
          }
        }
        if (!flag)
          cnt++;
      }
    }
    maxcnt1 += cnt;
  }

  cout << (n - (maxcnt1 + maxcnt)) << endl;
}
int main()
{

  solve();

  return 0;
}