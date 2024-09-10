#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n, k;
  cin >> n >> k;
  int i = 1;
  while (true)
  {
    if (k * i > n)
    {
      cout << (k * i) << endl;
      break;
    }
    i++;
  }
}
int main()
{

  solve();

  return 0;
}