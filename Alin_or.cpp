#include <bits/stdc++.h>
using namespace std;
bool f(string &s, int ind)
{
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
    {
      if (i != (ind))
      {
        return false;
      }
    }
  }
  if (s[ind] == '1')
    return true;

  return false;
}
void solve()
{
  int n, k;
  cin >> n >> k;
  vector<string> v;
  unordered_set<string> us;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    us.insert(s);
  }
  for (auto &it : us)
  {
    v.push_back(it);
  }
  sort(v.begin(), v.end());

  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << endl;
  // }
  // cout << endl;
  int ind = 0;
  vector<bool> vis(k, false);
  for (int i = 0; i < v.size(); i++)
  {
    string s = v[i];
    reverse(s.begin(), s.end());
    bool flag = f(s, ind);
    if (flag)
    {
      vis[ind] = flag;

      ind++;
    }
  }

  bool flag = false;
  for (int i = 0; i < k; i++)
  {

    if (vis[i] == false)
    {
      flag = true;
      break;
    }
  }
  if (flag)
  {
    cout << "NO\n";
  }
  else
  {
    cout << "YES\n";
  }
  // cout << endl;
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