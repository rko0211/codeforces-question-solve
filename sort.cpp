#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]] = i;
  }
  int cnt = 0;
  vector<pair<int, int>> vp;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == (i + 1))
    {
      continue;
    }
    cnt++;
    vp.push_back({(i + 1), m[(i + 1)] + 1});
    int temp = m[(i + 1)];
    int val = a[i];
    swap(a[i], a[m[(i + 1)]]);
    m[val] = temp;
  }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << a[i] << " ";
  // }
  // cout << endl;
  cout << cnt << endl;
  for (auto &it : vp)
  {
    cout << it.first << " " << it.second << endl;
  }
}
int main()
{

  solve();

  return 0;
}