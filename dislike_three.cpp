#include <bits/stdc++.h>
using namespace std;
vector<int> preecompute;
void solve()
{
  int k;
  cin >> k;
  cout << preecompute[k - 1] << endl;
}
int main()
{
  for (int i = 1; i <= 10000; i++)
  {
    if (i % 3 != 0 && i % 10 != 3)
    {
      preecompute.push_back(i);
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