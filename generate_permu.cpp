#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  if (n % 2 == 0)
  {
    cout << -1 << endl;
    return;
  }
  int ans[n];
  int mid = n / 2;
  ans[mid] = 1;
  int i = 2;
  int j = n;
  for (int k = 0; k < mid; k++)
  {
    ans[k] = i;
    i += 2;
  }
  for (int k = mid + 1; k < n; k++)
  {
    ans[k] = j;
    j -= 2;
  }
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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