#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  unordered_map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }
  bool flag = false;
  int i = 0;
  while (i < n)
  {
    if (m[i] == 0)
    {
      cout << i << endl;
      return;
    }
    else if ((!flag) && (m[i] == 1))
    {
      flag = true;
      // continue;
    }
    else if ((flag) && (m[i] == 1))
    {
      // cout << "j";
      cout << i << endl;
      return;
    }
    i++;
  }
  cout << (i) << endl;
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