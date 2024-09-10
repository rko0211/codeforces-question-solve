#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> p;
  if (a[0] < 0)
  {
    p.push_back(abs(a[0]));
  }
  else
  {
    p.push_back(0);
  }
  int i = 0;
  if (p[0] == 0)
  {
    i++;
  }
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