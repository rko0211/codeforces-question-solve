#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int MAX = 100000;
bool primes[MAX];
void solve()
{
  int d;
  cin >> d;
  for (int i = 2; i * i <= MAX; i++)
  {
    if (primes[i] == false)
    {
      for (int j = i * i; j <= MAX; j += i)
      {
        primes[j] = true;
      }
    }
  }

  int cnt = 2;
  int v1 = 1;
  int ans = 1;
  for (int i = 2; i <= MAX; i++)
  {
    if (!primes[i])
    {
      // if i is prime number
      if (abs(v1 - i) >= d)
      {
        v1 = i;
        cnt++;
        ans *= i;
      }
      if (cnt == 4)
      {
        break;
      }
    }
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