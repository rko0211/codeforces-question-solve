#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  vector<int> ans;
  int x = 0;
  while (n > 0)
  {
    if (n % 10 != 0)
    {
      ans.push_back((n % 10) * pow(10, x));
    }
    x++;
    n /= 10;
  }
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
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