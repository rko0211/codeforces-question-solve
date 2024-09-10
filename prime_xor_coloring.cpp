#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
}
int main()
{
  int N = 100000;
  vector<bool> isPrime(N + 1, true);
  isPrime[0] = false;
  isPrime[1] = false;
  for (int i = 2; i <= N; i++)
  {
    if (isPrime[i])
    {
      for (int j = i * i; j <= N; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}