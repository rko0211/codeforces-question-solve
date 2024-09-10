#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1e9 + 7;
static long t = 500000004;
long long sum(ll a, ll b)
{
  return ((((b - a + 1) % mod) * ((a + b) % mod)) % mod * t % mod);
}
int main()
{

  int n;
  cin >> n;
  ll ans = 0;
  for (int i = 1; i <= n;)
  {
    ll number_multiples = n / i;
    ll last = n / number_multiples;

    ans = (ans + (sum(i, last) * number_multiples)) % mod;

    i = last + 1;
  }
  // cout << firstterm << endl;

  cout << ans << endl;
  return 0;
}