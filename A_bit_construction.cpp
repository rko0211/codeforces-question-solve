#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll onesComplement(ll n)
{
  // Find number of bits in the given integer
  int number_of_bits = floor(log2(n)) + 1;

  // XOR the given integer with pow(2,number_of_bits-1)
  // and print the result
  // return ((1 << number_of_bits) - 1) ^ n;
  return number_of_bits;
}
void solve()
{
  ll n, k;
  cin >> n >> k;
  if (n == 1)
  {
    cout << k << endl;
    return;
  }
  int v = onesComplement(k);
  ll val = pow(2, v) - 1;
  if (val == k)
  {
    cout << val << " ";
    n--;
    for (int i = 0; i < n; i++)
    {
      cout << 0 << " ";
    }
    cout << endl;
    return;
  }

  ll t = pow(2, (v - 1)) - 1;
  cout << t << " " << (k - t) << " ";

  n -= 2;
  for (int i = 0; i < n; i++)
  {
    cout << 0 << " ";
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