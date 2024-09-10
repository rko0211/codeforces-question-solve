#include <bits/stdc++.h>
using namespace std;
const long long int maxi = (long long int)2e18;

long long int f(string &n, string &t)
{
  long long taken = 0;
  int np = 0;
  int tp = 0;
  while (np < n.size() && tp < t.size())
  {
    if (n[np] == t[tp])
    {

      tp++;
      taken++;
    }
    np++;
  }
  return ((int)n.size() - taken + (int)t.size() - taken);
}

vector<string> vs;
int main()
{
  for (long long int i = 1; i <= maxi; i *= 2)
  {
    vs.push_back(to_string(i));
  }
  int t;
  cin >> t;
  while (t--)
  {
    string n;
    cin >> n;
    long long ans = n.size() + 1;
    for (auto &it : vs)
    {
      ans = min(ans, f(n, it));
    }
    cout << ans << endl;
  }

  return 0;
}