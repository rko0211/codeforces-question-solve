#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int a[2];
  cin >> a[0] >> a[1];

  int n = a[0];
  int k = a[1];

  string s = "";
  char ch = 'a';
  while (k--)
  {
    s += ch;
    ch += 1;
  }

  n -= 1;
  string s1 = s;
  while (n--)
  {

    s += s1;
  }
  cout << s << endl;
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