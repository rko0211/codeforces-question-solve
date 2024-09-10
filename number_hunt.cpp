#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isPrime(long long n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (long long i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  }

  return true;
}
void solve()
{
  ll x;
  cin >> x;
  ll val1 = -1;
  ll val2 = -1;
  while (1)
  {
    if (val1 != -1 && val2 != -1)
    {
      // cout << " cp ";
      break;
    }
    else
    {
      if (val1 == -1 && isPrime(x))
      {
        val1 = x;
        // cout << "c ";
      }
      else if (val2 == -1 && isPrime(x))
      {
        val2 = x;
        // cout << "p ";
      }
      x++;
    }
  }
  // cout << val1 << " " << val2 << endl;
  cout << (val1 * val2) << endl;
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