#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, m;
  cin >> n >> m;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int b[m];
  for (int j = 0; j < m; j++)
    cin >> b[j];

  multiset<int> ms;
  for (int i = 0; i < n; i++)
  {
    ms.insert(a[i]);
  }
  vector<int> ans;
  for (int i = 0; i < m; i++)
  {
    auto it = ms.lower_bound(b[i]);
    if (it != ms.end() && *it == b[i])
    {
      ans.push_back(*it);
      ms.erase(it);
    }
    else
    {
      auto temp = it;

      // temp--;
      if ((temp == ms.begin() && *temp > b[i]) || ms.size() == 0)
      {
        ans.push_back(-1);
      }
      else
      {
        if (temp != ms.end() && *temp <= b[i])
        {
          ans.push_back(*temp);
          ms.erase(temp);
        }
        else
        {
          temp--;
          ans.push_back(*temp);
          ms.erase(temp);
        }
      }
    }
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
}
int main()
{

  solve();

  return 0;
}