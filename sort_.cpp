#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, q;
  cin >> n >> q;
  string s, t;
  cin >> s >> t;
  map<char, int> mp1, mp2;
  int pref[n];
  int val = 0;
  for (int i = 0; i < n; i++)
  {
    mp1[s[i]]++;
    mp2[t[i]]++;
    if (s[i] == t[i])
    {
      pref[i] = val;
      continue;
    }
    if (mp1[s[i]] != mp2[s[i]])
    {
      val++;
    }
    if (mp1[t[i]] == mp2[t[i]])
    {
      val--;
    }

    pref[i] = val;
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    if (l == 0)
    {
      cout << pref[r] << endl;
    }
    else
    {
      cout << abs(pref[r] - pref[l - 1]) << endl;
    }
  }
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