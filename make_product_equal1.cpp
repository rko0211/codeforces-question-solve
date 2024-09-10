#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  // sort(a, a + n);
  ll neg = 0;
  ll pos = 0;
  ll mini = INT_MAX;
  ll negmaxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= 0)
    {
      mini = min(mini, a[i]);
      pos++;
    }
    else
    {
      neg++;
      negmaxi = max(negmaxi, a[i]);
    }
  }
  if (neg % 2 == 0)
  {
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] < 0)
      {
        ans += (-1 - a[i]);
      }
      else
      {
        ans += abs(1 - a[i]);
      }
    }
    cout << ans << endl;
  }
  else
  {
    ll ans = 0;
    if ((1 - negmaxi) <= (mini + 1))
    {

      bool flag = false;
      for (int i = 0; i < n; i++)
      {
        if (a[i] == negmaxi && flag == false)
        {
          ans += (1 - negmaxi);
          flag = true;
        }
        else if (a[i] < 0)
        {
          ans += (-1 - a[i]);
        }
        else
        {
          ans += abs(1 - a[i]);
        }
      }
    }
    else
    {
      bool flag = false;
      for (int i = 0; i < n; i++)
      {
        if (a[i] == mini && flag == false)
        {
          ans += (mini + 1);
          flag = true;
        }
        else if (a[i] < 0)
        {
          ans += (-1 - a[i]);
        }
        else
        {
          ans += abs(1 - a[i]);
        }
      }
    }

    cout << ans << endl;
  }
}
int main()
{

  solve();

  return 0;
}