#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int k, q;
  cin >> k >> q;
  int a[k];
  for (int i = 0; i < k; i++)
    cin >> a[i];
  int n[q];
  for (int j = 0; j < q; j++)
    cin >> n[j];

  int ans[q];
  int x = 0;
  for (int i = 0; i < q; i++)
  {
    int ele_num = n[i];
    ans[x] = min(ele_num, (a[0] - 1));
    x++;
  }

  for (int i = 0; i < x; i++)
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