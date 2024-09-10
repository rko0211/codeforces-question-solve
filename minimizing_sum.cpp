#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n, k;
  cin >> n >> k;
  ll a[n];
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  if (k == 0 || n == 1)
  {
    cout << sum << endl;
    return;
  }
  // cout << sum << endl;
  vector<int> dif;
  int lo = 0;
  int hi = min(k - 1, n - 1);
  while (hi < n)
  {
    ll mini = LLONG_MAX;
    for (int i = lo; i <= hi; i++)
    {
      mini = min(mini, a[i]);
    }
    for (int i = lo; i <= hi; i++)
    {
      if (a[i] != mini)
      {
        dif.push_back(abs(a[i] - mini));
      }
    }
    // dif.push_back(abs(a[hi + 1] - mini));
    lo++;
    hi++;
  }
  sort(dif.begin(), dif.end());
  reverse(dif.begin(), dif.end());

  ll sub = 0;
  int v = dif.size();
  for (int i = 0; i < min(k, v); i++)
  {
    if (k <= 0)
    {
      break;
    }
    // cout << dif[i] << " ";
    sub += dif[i];
    // k--;
  }
  // cout << endl;

  cout << (sum - sub) << endl;
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