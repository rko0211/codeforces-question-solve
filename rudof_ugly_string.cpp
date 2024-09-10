#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin >> n;
  string s;
  cin >> s;
  string t1 = "";
  for (int i = 0; i < 2; i++)
  {
    t1 += s[i];
  }
  int ans = 0;
  int i = 0;
  int j = 2;
  while (j < n)
  {
    t1 += s[j];
    if (t1 == "map")
    {
      ans++;
    }
    t1.erase(0, 1);

    i++;
    j++;
  }

  string t2 = "";
  for (int i = 0; i < 2; i++)
  {
    t2 += s[i];
  }
  i = 0;
  j = 2;
  while (j < n)
  {
    t2 += s[j];
    if (t2 == "pie")
    {
      ans++;
    }
    t2.erase(0, 1);

    i++;
    j++;
  }

  string t3 = "";
  for (int i = 0; i < 4; i++)
  {
    t3 += s[i];
  }
  i = 0;
  j = 4;
  while (j < n)
  {
    t3 += s[j];
    if (t3 == "mapie")
    {
      ans--;
    }
    t3.erase(0, 1);
    i++;
    j++;
  }
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