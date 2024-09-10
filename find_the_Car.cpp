#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
  int n, k, q;
  cin >> n >> k >> q;
  vector<ll> a(k);
  vector<ll> b(k);

  for (int i = 0; i < k; i++)
    cin >> a[i];
  for (int j = 0; j < k; j++)
    cin >> b[j];

  vector<double> velocity(k);
  double d1 = static_cast<double>(a[0]);
  double t1 = static_cast<double>(b[0]);
  velocity[0] = d1 / t1;

  for (int i = 1; i < k; i++)
  {
    double dist = static_cast<double>(a[i] - a[i - 1]);
    double min = static_cast<double>(b[i] - b[i - 1]);
    velocity[i] = dist / min;
  }

  while (q--)
  {
    ll d;
    cin >> d;
    int ind = lower_bound(a.begin(), a.end(), d) - a.begin();

    if (ind == 0)
    {
      double extra_min = static_cast<double>(d) / velocity[ind];
      cout << static_cast<ll>(extra_min) << " ";
    }
    else
    {
      ll min = b[ind - 1];
      ll dist = abs(a[ind - 1] - d);
      double extra_min = static_cast<double>(dist) / velocity[ind];
      cout << (min + static_cast<ll>(extra_min)) << " ";
    }
  }
  cout << endl;
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
