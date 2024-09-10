#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll x;
  cin >> x;
  vector<int> res(31, 0);
  int lo = 0, hi = 0;
  int i = 0;
  while (x > 0)
  {
    int bit = x & 1;
    res[i++] = bit;
    x >>= 1;
  }

  bool flag = false;

  for (int j = 0; j < 31; j++)
  {
    if (res[j] == 1)
    {
      if (flag == false)
      {
        lo = j;
        flag = true;
      }
      hi = j;
    }
    else
    {

      if ((hi - lo + 1) < 2)
      {
        flag = false;
      }
      else
      {
        res[lo] = -1;
        for (int k = lo + 1; k <= hi; k++)
        {
          res[k] = 0;
        }
        res[j] = 1;
        lo = j;
        hi = j;
      }
    }
  }

  cout << 31 << endl;
  for (auto &it : res)
  {
    cout << it << " ";
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