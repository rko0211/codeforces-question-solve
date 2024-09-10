#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  ll b[n];
  ll minic = LLONG_MAX;
  ll minio = LLONG_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    minic = min(minic, a[i]);
  }
  for (int j = 0; j < n; j++)
  {
    cin >> b[j];
    minio = min(minio, b[j]);
  }

  ll ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += max((a[i] - minic), (b[i] - minio));
  }
  cout << ans << endl;
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    solve();
  }

  return 0;
}