#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 100005;
bool isprime[N];
void solve()
{
  ll m, n;
  cin >> m >> n;

  for (int i = max(2LL, m); i <= n; i++)
  {
    if (isprime[i] == false)
    {
      cout << i << endl;
    }
  }
  cout << endl;
}
int main()
{
  for (int i = 2; i * i <= N; i++)
  {
    if (isprime[i] == false)
    {
      for (int j = i * i; j <= N; j += i)
      {
        isprime[j] = true;
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