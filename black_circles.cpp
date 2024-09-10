#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  vector<pair<long double, long double>> vp;
  for (int i = 0; i < n; i++)
  {
    long double x, y;
    cin >> x >> y;
    vp.push_back({x, y});
  }
  long double xs, ys, xt, yt;
  cin >> xs >> ys >> xt >> yt;
  long double ctime1 = INT_MAX;
  long double ctime2 = INT_MAX;
  for (int i = 0; i < vp.size(); i++)
  {
    // ctime1 = min(ctime1, sqrt(pow(abs(xs - vp[i].first), 2) + pow(abs(ys - vp[i].second), 2)));
    ctime2 = min(ctime2, sqrt(pow(abs(xt - vp[i].first), 2) + pow(abs(yt - vp[i].second), 2)));
  }
  long double req = sqrt(pow(abs(xt - xs), 2) + pow(abs(yt - ys), 2));

  // cout << req << " " << ctime2 << endl;

  if (req < ctime2)
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
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