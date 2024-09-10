#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  ll t = n;
  if (k == 1)
  {
    cout << n << endl;
    return;
  }
  vector<int> v;
  while (t > 0)
  {
    v.push_back((t & 1));
    t >>= 1;
  }

  int val = v.size() - 1;
  for (int i = 0; i < v.size() && k > 0; i++)
  {

    v[i] = 1;
  }

  // cout << val << endl;
  ll ans = 0;
  for (int i = 0; i < v.size(); i++)
  {
    // cout << v[i] << " " << val << endl;

    ans += (v[i] * 1LL * pow(2, val));
    val--;
  }
  // cout << endl;

  cout << ans << endl;
}
int main()
{

  solve();

  return 0;
}