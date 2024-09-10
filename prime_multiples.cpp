#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

  ll n;
  cin >> n;
  int k;
  cin >> k;
  ll a[k];
  for (int i = 0; i < k; i++)
  {
    cin >> a[i];
  }
  sort(a, a + k);
  ll ans = 0;
  for (int i = 0; i < k; i++)
  {
    ans += (n / a[i]);
  }
  // cout << ans << endl;
  for (int i = 0; i < k; i++)
  {
    for (int j = i + 1; j < k; j++)
    {
      if (i == j)
        continue;
      if ((a[i] * a[j]) > n)
      {
        break;
      }
      else
      {
        ans -= (n / ((a[i] * a[j])));
      }
    }
  }
  cout << ans << endl;

  return 0;
}