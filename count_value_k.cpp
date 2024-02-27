#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int a, b, l;
  cin >> a >> b >> l;
  // int val = (l / (a * b));
  int ans = 0;
  unordered_set<int> us;
  int i = 0;
  while (1)
  {

    ll v = pow(a, i);
    if (v <= l)
    {
      if (l % v == 0)
      {
        ll p = l / v;
        int j = 0;
        while (1)
        {
          ll v2 = pow(b, j);
          if (v2 <= p)
          {
            if (p % v2 == 0)
            {
              // cout << i << " " << j << endl;
              us.insert(p / v2);
            }
            j++;
          }
          else
          {
            break;
          }
        }
      }
      i++;
    }
    else
    {
      break;
    }
  }
  unordered_set<int> us2;
  i = 0;
  while (1)
  {

    ll v = pow(b, i);
    if (v <= l)
    {
      if (l % v == 0)
      {
        ll p = l / v;
        int j = 0;
        while (1)
        {
          ll v2 = pow(a, j);
          if (v2 <= p)
          {
            if (p % v2 == 0)
            {
              // cout << i << " " << j << endl;
              us2.insert(p / v2);
            }
            j++;
          }
          else
          {
            break;
          }
        }
      }
      i++;
    }
    else
    {
      break;
    }
  }
  cout << max(us.size(), us2.size()) << endl;
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