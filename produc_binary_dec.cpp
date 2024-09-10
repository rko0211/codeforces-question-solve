#include <bits/stdc++.h>
using namespace std;
const int MAX = 100'007;
#define ll long long int
vector<int> good_dec;
bool ok(int n)
{
  if (n == 1)
    return true;
  bool ans = false;
  for (int i : good_dec)
  {
    if (n % i == 0)
    {
      ans |= ok(n / i);
    }
  }
  return ans;
}
void solve()
{

  int n;
  cin >> n;
  if (ok(n))
  {
    cout << "YES\n";
  }
  else
  {
    cout << "NO\n";
  }
}
int main()
{
  for (int i = 2; i < MAX; i++)
  {
    bool bad = false;
    int cur = i;
    while (cur > 0)
    {
      if ((cur % 10) > 1)
      {
        bad = true;
        break;
      }
      cur /= 10;
    }
    if (!bad)
    {
      good_dec.push_back(i);
    }
  }
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}