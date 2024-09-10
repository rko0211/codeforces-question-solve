#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  bool flag = false;
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      flag = true;
      break;
    }
  }
  if (!flag)
  {
    cout << "YES\n";
    return;
  }

  vector<int> temp;
  vector<int> ans;
  for (int i = 0; i < n - 1; i++)
  {
    temp.push_back(a[i]);

    if (a[i] > a[i + 1])
    {
      ans.clear();
      for (int j = 0; j < temp.size(); j++)
      {
        if (temp[j] != -1 && temp[j] >= 10)
        {
          int val = temp[j];
          int v1 = val % 10;
          val /= 10;

          int v2 = val % 10;
          ans.push_back(v2);
          ans.push_back(v1);
        }
        else if (temp[j] != -1 && temp[j] < 10)
        {
          ans.push_back(temp[j]);
        }
        // temp[j] = -1;
      }
    }
    else
    {
      ans.push_back(a[i]);
    }
  }
  ans.push_back(a[n - 1]);
  // cout << endl;
  for (int i = 0; i < ans.size() - 1; i++)
  {
    // cout << ans[i] << " ";
    if (ans[i] > ans[i + 1])
    {
      cout << "NO\n";
      return;
    }
  }
  // cout << ans[ans.size() - 1] << endl;
  cout << "YES\n";
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