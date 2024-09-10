#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ans = 0;
  int ind;
  int val = INT_MIN;
  for (int i = 0; i < n - 1; i++)
  {
    if (val < a[i])
    {
      ind = i;
      val = a[i];
    }
  }

  cout << (a[n - 1] + val) << endl;
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