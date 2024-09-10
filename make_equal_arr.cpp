#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  map<int, int> mp;
  int x;
  for (int i = 0; i < n; i++)
  {

    cin >> x;
    mp[x]++;
  }
  int maxi = INT_MIN;
  for (auto &it : mp)
  {
    maxi = max(maxi, it.second);
  }
  cout << (n - maxi) << endl;
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