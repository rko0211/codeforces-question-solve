#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, q;
  cin >> n >> q;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    if (m[a[i]] == 0)
    {
      m[a[i]] = (i + 1);
    }
  }

  for (int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    cout << m[x] << " ";
    for (int i = 1; i <= 50; i++)
    {
      if (m[i] != 0)
      {
        if (m[i] < m[x])
        {
          m[i] += 1;
        }
      }
    }
    m[x] = 1;
  }
}
int main()
{

  solve();

  return 0;
}