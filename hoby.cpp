#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  string s;
  cin >> s;

  int val = n;
  map<int, bool> mp;
  vector<set<pair<int, char>>> vs;
  for (int i = 1; i <= n; i++)
  {
    if (mp[i] == false)
    {

      set<pair<int, char>> st;
      int ind = a[i - 1];
      while (ind != i)
      {
        st.insert({a[ind - 1], s[ind - 1]});
        mp[a[ind - 1]] = true;
        ind = a[ind - 1];
      }
      st.insert({a[ind - 1], s[ind - 1]});
      mp[a[ind - 1]] = true;

      vs.push_back(st);
    }
  }

  map<int, int> mp1;

  for (int i = 0; i < vs.size(); i++)
  {
    int cnt = 0;
    for (auto &it : vs[i])
    {
      if (it.second == '0')
      {
        cnt++;
      }
    }

    for (auto &it : vs[i])
    {
      // cout << it.first << " ";
      mp1[it.first] = cnt;
    }
    // cout << endl;
  }

  for (int i = 0; i < n; i++)
  {
    cout << mp1[a[i]] << " ";
  }
  cout << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    solve();
  }
}