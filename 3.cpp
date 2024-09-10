#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  // sort(a, a + n);
  ll prefix[n];
  prefix[0] = a[0];
  for (int i = 1; i < n; i++)
  {
    prefix[i] = (prefix[i - 1] + a[i]);
  }
  // int pref_ans[n] = {0};

  int ans = 0;
  if (a[0] == 0)
  {
    ans++;
  }
  ll largest = a[0];
  for (int i = 1; i < n; i++)
  {
    largest = max(largest, a[i]);
    if ((prefix[i] - largest) == largest)
    {
      ans++;
    }
  }
  cout << ans << endl;
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