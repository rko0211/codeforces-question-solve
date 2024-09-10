#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  unordered_map<char, int> m1;
  for (int i = 0; i < s1.size(); i++)
  {
    m1[s1[i]]++;
  }
  int ans = s1.size();
  int maxi = 0;
  for (int i = 0; i < s2.size(); i++)
  {
    if (m1[s2[i]])
    {
      int t1 = i;
      for (int j = 0; j < s1.size() && t1 < s2.size(); j++)
      {
        if (s1[j] == s2[t1])
        {
          t1++;
        }
        else
        {
          maxi = max(maxi, (t1 - i));
        }
      }
      maxi = max(maxi, (t1 - i));
    }
  }

  ans += (s2.size() - maxi);
  cout << ans << endl;
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