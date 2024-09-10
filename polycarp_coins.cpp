#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int ans1, ans2;
  int dif = INT_MAX;
  int c1 = n / 3;
  int c2 = c1;
  int rem = n % 3;
  if (rem == 0)
  {
    cout << c1 << " " << c2 << endl;
  }
  else if (rem == 1)
  {
    c1 = c2 + 1;
    cout << c1 << " " << c2 << endl;
  }
  else
  {
    c2 = c1 + 1;
    cout << c1 << " " << c2 << endl;
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