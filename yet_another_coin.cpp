#include <bits/stdc++.h>
using namespace std;
#define l long int
void solve()
{
  l n;

  cin >> n;
  vector<int> f{0,
                1,
                2,
                1,
                2,
                3,
                1,
                2,
                3,
                2,
                1,
                2,
                2,
                2,
                3};

  if (n < 15)
  {
    cout << f[n % 15] << endl;
  }
  else if (n % 15 == 5)
  {
    cout << (n / 15) + 1 << endl;
  }
  else if (n % 15 == 8)
  {
    cout << (n / 15) + 2 << endl;
  }
  else
  {
    cout << (n / 15) + f[n % 15] << endl;
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