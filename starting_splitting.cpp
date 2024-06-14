#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  unordered_set<int> us;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    us.insert(a[i]);
  }
  if (us.size() == 1)
  {
    cout << "NO\n";
    return;
  }

  cout << "YES\n";
  if (a[0] != a[n - 2])
  {
    for (int i = 0; i < n - 1; i++)
    {
      cout << "R";
    }
    cout << "B\n";
  }
  else
  {
    cout << "B";
    for (int i = n - 1; i > 0; i--)
    {
      cout << "R";
    }
    cout << endl;
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