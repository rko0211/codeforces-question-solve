#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
  ll x;
  cin >> x;
  ll p = x;
  if (x < 10)
  {
    cout << "NO\n";
    return;
  }
  if (x % 10 == 9)
  {
    cout << "NO\n";
    return;
  }
  int carry = 0;
  int rem;
  vector<int> digit;
  while (x > 0)
  {
    rem = x % 10;
    digit.push_back(rem);
    x /= 10;
  }
  string s1 = "", s2 = "";
  int sub = 0;
  for (int i = 0; i < digit.size() - 1; i++)
  {
    int val = (10 + digit[i] - sub);
    int v1 = val / 2;
    int v2 = (val - v1);
    s1 += (v1 + '0');
    s2 += (v2 + '0');
    sub = 1;
  }
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());

  // cout << s1 << " " << s2 << endl;

  for (int i = 0; i < s1.size(); i++)
  {
    if (s1[i] < '5' || s2[i] < '5')
    {
      cout << "NO\n";
      return;
    }
  }

  ll p1 = stoll(s1);
  ll p2 = stoll(s2);

  if ((p1 + p2) == p)
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
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
