#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  ll l;
  cin >> l;
  int a[n];
  a[0] = 1;
  for (int j = 2; j <= n; j++)
  {
    if ((a[j - 2] + j) <= l)
    {
      a[j - 1] = (j);
    }
    else
    {
      a[j - 1] = (a[j - 2] + l);
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
