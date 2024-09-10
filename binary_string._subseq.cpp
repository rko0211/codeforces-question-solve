#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  stack<int> zero, one;
  map<int, vector<char>> mp;
  int x = 1;
  vector<int> ans;
  for (int i = 0; i < n; i++)
  {
    if (mp.size() > 0)
    {
      if (s[i] == '0')
      {
        if (one.size() > 0)
        {
          mp[one.top()].push_back(s[i]);
          ans.push_back(one.top());
          zero.push(one.top());
          one.pop();
        }
        else
        {
          ans.push_back(x);
          zero.push(x);
          mp[x].push_back(s[i]);
          x++;
        }
      }
      else
      {
        if (zero.size() > 0)
        {
          mp[zero.top()].push_back(s[i]);
          ans.push_back(zero.top());
          one.push(zero.top());
          zero.pop();
        }
        else
        {
          ans.push_back(x);
          one.push(x);
          mp[x].push_back(s[i]);
          x++;
        }
      }
    }
    else
    {
      if (s[i] == '0')
      {
        zero.push(x);
      }
      else
      {
        one.push(x);
      }
      ans.push_back(x);
      mp[x++].push_back((s[i]));
    }
  }
  unordered_set<int> us;

  for (int i = 0; i < ans.size(); i++)
  {
    us.insert(ans[i]);
  }
  cout << us.size() << endl;
  for (int i = 0; i < ans.size(); i++)
  {

    cout << ans[i] << " ";
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