#include <iostream>
#include <vector>
using namespace std;

#define int long long

int n, q;
vector<int> a;

int f(int l, int r, int u)
{
  int v = a[r] - a[l - 1];
  return (2 * u - v + 1) * v / 2;
}

void solve()
{
  cin >> n;
  a.assign(n + 1, 0);
  for (int i = 1; i <= n; i++)
    cin >> a[i], a[i] += a[i - 1];
  cin >> q;
  while (q--)
  {
    int l, u;
    cin >> l >> u;
    int lo = l, hi = n;
    while (lo < hi)
    {
      int mid = (lo + hi) / 2;
      if (f(l, mid, u) >= f(l, mid + 1, u))
        hi = mid;
      else
        lo = mid + 1;
    }
    cout << lo << " ";
  }
  cout << "\n";
}

signed main()
{
  ios::sync_with_stdio(0), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}