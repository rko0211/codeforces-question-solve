#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxbit = 60;
bool get_bit(int64_t a, int i)
{
  return a & (1ll << i);
}

void solve()
{
  ll a, b, r;
  cin >> a >> b >> r;
  if (b > a)
  {
    swap(a, b);
  }
  ll x = 0;
  bool first_difbit = 0;
  for (int i = maxbit - 1; i >= 0; i--)
  {
    bool bit_a = get_bit(a, i);
    bool bit_b = get_bit(b, i);
    if (bit_a == bit_b)
    {
      continue;
    }

    else
    {
      if (first_difbit == 0)
      {

        x += (1ll << i);
        first_difbit = 1;
      }
      else
      {
      }
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
