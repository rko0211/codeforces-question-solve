#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = max(sum, a[i]);
  }

  if (sum % 2 == 1)
  {
    cout << "first\n";
  }
  else
  {
    cout << "second\n";
  }
}
int main()
{

  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}