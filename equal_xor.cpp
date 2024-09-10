#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  if (p1.second != p2.second)
  {
    return p1.second > p2.second;
  }
  return p1.first < p2.first;
}
void solve()
{
  int n, k;
  cin >> n >> k;
  int sz = 2 * n;
  int a[sz];
  for (int i = 0; i < sz; i++)
  {
    cin >> a[i];
  }
  unordered_map<int, int> m1, m2;
  for (int i = 0; i < n; i++)
  {
    m1[a[i]]++;
  }
  for (int i = n; i < sz; i++)
  {
    m2[a[i]]++;
  }
  vector<pair<int, int>> vp1, vp2;
  for (auto &it : m1)
  {
    vp1.push_back({it.first, it.second});
  }
  sort(vp1.begin(), vp1.end(), cmp);

  for (auto &it : m2)
  {
    vp2.push_back({it.first, it.second});
  }
  sort(vp2.begin(), vp2.end(), cmp);
  int val = 2 * k;
  for (auto &it : vp1)
  {
    if (val <= 0)
    {
      break;
    }
    if (it.second == 2)
    {
      cout << it.first << " " << it.first << " ";
      val -= 2;
    }
    else
    {
      cout << it.first << " ";
      val--;
    }
  }
  cout << endl;
  val = 2 * k;

  for (auto &it : vp2)
  {
    if (val <= 0)
    {
      break;
    }
    if (it.second == 2)
    {
      cout << it.first << " " << it.first << " ";
      val -= 2;
    }
    else
    {
      cout << it.first << " ";
      val--;
    }
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