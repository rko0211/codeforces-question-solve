#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  ll l = k / 2;
  ll h = (k - l);
  int i = 0;
  int j = n - 1;
  int cnt = 0;
  bool flag = false;
  while (i <= j)
  {
    flag = false;
    if (i == j)
    {
      if ((l + h) >= a[i])
      {
        cnt++;
      }
      i++;
      j--;
    }

    else
    {

      if (h >= a[i])
      {
        h -= a[i];
        a[i] = 0;
        cnt++;
        i++;
        flag = true;
      }
      if (l >= a[j])
      {
        l -= a[j];
        a[j] = 0;
        cnt++;
        j--;
        flag = true;
      }
      if (!flag)
      {
        break;
      }
    }
  }
  cout << cnt << endl;
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