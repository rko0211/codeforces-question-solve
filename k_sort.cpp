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

  ll maxi = a[0];
  vector<ll> ans;
  for (int i = 1; i < n; i++)
  {
    maxi = max(maxi, a[i - 1]);
    if (maxi > a[i])
    {
      ans.push_back((maxi - a[i]));
    }
  }
  sort(ans.begin(), ans.end());
  int val = 0;
  int size = ans.size();
  ll res = 0;
  for (int i = 0; i < ans.size(); i++)
  {
    ans[i] -= val;
    res += (size + 1) * ans[i];
    val += ans[i];
    size--;
  }
  cout << res << endl;
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