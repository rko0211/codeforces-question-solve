#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  ll term = log2(n);
  ll ans = 1;
  while (term > 0)
  {
    ans *= 2;
    term--;
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