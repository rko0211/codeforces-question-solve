#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  ll sum = (n * (n + 1) / 2);
  ll m = n;
  ll i = 1;
  ll a[n + 1][n + 1];

  for (int i = 0; i < n; i++)
  {
    ll x = 1;
    for (int j = 0; j < n; j++)
    {
      a[i][j] = x;
      x++;
    }
    a[i][n] = sum;
    a[n][i] = ((i + 1) * n);
  }

  bool continueloop = true;
  vector<ll> row;
  vector<ll> col;
  row.push_back(n);
  bool c = true;
  bool r = false;
  while (continueloop)
  {
    if (r == true)
    {
      // ROW traversal
      ll cnt = 0;
      for (int i = 0; i < n; i++)
      {
        if (a[i][n] < sum)
        {
          cnt++;
          m++;
          ll x = 1;
          for (int j = 0; j < n; j++)
          {
            a[n][j] -= a[i][j];
            a[i][n] -= a[i][j];
            a[i][j] = x;
            a[i][n] += a[i][j];
            a[n][j] += a[i][j];
            x++;
          }
        }
        else
        {
          row.push_back(cnt);
          break;
        }
      }
      r = false;
      c = true;
      if (row.back() == 0)
      {
        continueloop = false;
      }
    }
    else
    {
      // COL traversal
      ll cnt = 0;
      for (int j = 0; j < n; j++)
      {
        if (a[n][j] < sum)
        {
          cnt++;
          m++;
          ll x = 1;
          for (int i = 0; i < n; i++)
          {
            a[n][j] -= a[i][j];
            a[i][n] -= a[i][j];
            a[i][j] = x;
            a[i][n] += a[i][j];
            a[n][j] += a[i][j];
            x++;
          }
        }
        else
        {
          col.push_back(cnt);
          break;
        }
      }

      r = true;
      c = false;
      if (col.back() == 0)
      {
        continueloop = false;
      }
    }
  }

  ll sumval = 0;

  for (int i = 0; i < (n); i++)
  {
    for (int j = 0; j < (n); j++)
    {
      // cout << a[i][j] << " ";
      sumval += a[i][j];
    }
    // cout << endl;
  }
  if (n > 1 && n % 2 == 1)
  {
    sumval++;
    m += 2;
  }
  cout << sumval << " " << m << endl;
  bool flag = false;
  ll val = m;
  if (n > 1 && n % 2 == 1)
  {
    val -= 2;
  }
  int p = 0;
  int q = 0;
  while (val > 0)
  {
    if (flag == false)
    {
      // row
      for (int i = 0; p < row.size() && i < row[p]; i++)
      {
        cout << 1 << " " << (i + 1) << " ";
        for (int l = 1; l <= n; l++)
        {
          cout << l << " ";
        }
        cout << endl;
      }
      p++;

      flag = true;
    }
    else
    {
      // col
      for (int i = 0; q < col.size() && i < col[q]; i++)
      {
        cout << 2 << " " << (i + 1) << " ";
        for (int l = 1; l <= n; l++)
        {
          cout << l << " ";
        }
        cout << endl;
      }
      q++;
      flag = false;
    }
    val--;
  }

  if (n > 1 && n % 2 == 1)
  {
    cout << 2 << " " << (n / 2 + 1) << " ";
    for (int l = 1; l <= n; l++)
    {
      cout << l << " ";
    }
    cout << endl;

    cout << 1 << " " << (n / 2 + 1) << " ";
    for (int l = 1; l <= n; l++)
    {
      cout << l << " ";
    }
    cout << endl;
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