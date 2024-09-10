#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

  ll n;
  cin >> n;
  // Mahmoud -> even
  // Ehab -> Odd
  if (n % 2 == 1)
  {
    cout << "Ehab\n";
  }
  else
  {
    cout << "Mahmoud\n";
  }
}
int main()
{

  solve();

  return 0;
}