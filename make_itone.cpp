#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int l, r;
  cin >> l >> r;
  int n = r - l + 1;
  int a[n];
  int v = l;
  for (int i = 0; i < n; i++)
  {
    a[i] = v;
    v++;
  }
  vector<int> odd;
  vector<int> even;

  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      even.push_back(a[i]);
    }
    else
    {
      odd.push_back(a[i]);
    }
  }
  if (even.size() > odd.size())
  {
    cout << -1 << endl;
    return;
  }
  else
  {
    for (int i = 0; i < n - 1; i += 2)
    {
      swap(a[i], a[i + 1]);
    }
    if (n % 2 == 1)
    {
      swap(a[n - 1], a[n - 3]);
    }
    for (int i = 0; i < n; i++)
    {
      cout << a[i] << " ";
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