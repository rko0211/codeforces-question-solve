#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll k;
  cin >> k;
  ll sum = 0;
  int x = 1;
  for (int i = n; i >= 1; i--)
  {
    sum += abs(i - x);
    x++;
  }

  if (sum < k)
  {
    cout << "No\n";
    return;
  }
  if (k % 2 == 1)
  {
    cout << "No\n";
    return;
  }
  int a[n];
  for (int i = 0; i < n; i++)
  {
    a[i] = (i + 1);
  }
  int lo = 0;
  int hi = n - 1;
  ll val = k;
  while (lo < hi)
  {
    int dif = (a[hi] - a[lo]);
    if ((2 * dif) <= val)
    {
      swap(a[lo], a[hi]);
      val -= (2 * dif);
      hi--;
      lo++;
    }
    else
    {
      hi--;
    }
  }

  ll tsum = 0;
  for (int i = 0; i < n; i++)
  {
    tsum += abs(a[i] - (i + 1));
  }
  if (tsum == k)
  {
    cout << "Yes\n";
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "No\n";
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