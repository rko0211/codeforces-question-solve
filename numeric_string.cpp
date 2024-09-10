#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  map<ll, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mp[a[i]]++;
  }
  auto isValid = [&](string &str) -> bool
  {
    map<char, ll> charToint;
    map<ll, char> intTochar;
    for (int i = 0; i < str.size(); i++)
    {
      char ch = str[i];
      ll v = a[i];
      if (charToint.count(ch) && charToint[ch] != v)
      {
        return false;
      }
      if (intTochar.count(v) && intTochar[v] != ch)
      {
        return false;
      }
      charToint[ch] = v;
      intTochar[v] = ch;
    }
    return true;
  };
  int m;
  cin >> m;
  while (m--)
  {
    string s;
    cin >> s;
    if (s.size() != n)
    {
      cout << "NO\n";
      continue;
    }

    if (isValid(s))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
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