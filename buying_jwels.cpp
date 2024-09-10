#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  ll val = n / k;
  ll rem = n % k;
  if (val != 0 && (((n / val) > k) || ((n / val) < k)))
  {
    cout << "NO\n";
    return;
  }
  else
  {
    cout << "YES\n";
    cout << 2 << endl;
    cout << val << " " << (rem + 1) << endl;
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