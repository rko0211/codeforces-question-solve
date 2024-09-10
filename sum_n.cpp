#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MAX = 1000000;
vector<bool> isPrime(MAX + 1, true); // initially all are prime

void countPrimes()
{
  isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
  for (int i = 2; i * i <= MAX; ++i)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= MAX; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
}

void solve()
{
  int k;
  cin >> k;
  ll ans = 0;
  int x = 2;
  for (int i = 2 * k; i <= k * k; i += k)
  {
    if (i % 2 == 0)
    {
      if (i / 2 == k)
      {
        ans += i;
      }
    }
    else if (i % 3 == 0)
    {
      if (i / 3 == k)
      {
        ans += i;
      }
    }
    else
    {

      if (isPrime[x] && i % x == 0 && i / x == k)
      {
        ans += i;
      }
    }
    x++;
  }
  cout << ans << endl;
}

int main()
{
  countPrimes();
  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
