#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[k];
  for (int i = 0; i < k; i++)
    cin >> a[i];
  map<int, int> m;
  for (int i = 0; i < k; i++)
  {
    m[a[i]]++;
  }

  for (auto &it : m)
  {
    if (it.second % 2 == 1)
    {
      n--;
    }
  }
  cout << n << endl;
}
int main()
{

  solve();

  return 0;
}