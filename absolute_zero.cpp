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
  if (n == 1)
  {
    cout << 1 << endl;
    cout << a[0] << endl;
    return;
  }
  vector<int> ans;
  for (int i = 1; i <= 40; i++)
  {
    ll val = 0;
    sort(a, a + n);
    val = (a[0] + a[n - 1]);

    val /= 2;
    ans.push_back(val);
    for (int j = 0; j < n; j++)
    {
      a[j] = abs(a[j] - val);
    }
  }

  bool f = false;
  for (int i = 0; i < n; i++)
  {
    if (a[i] != 0)
    {
      f = true;
      break;
    }
  }
  if (!f)
  {
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
    return;
  }
  cout << -1 << endl;
  return;
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