#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll k;
  cin >> k;

  int portion = ceil(sqrt(k));

  int dif = ((portion * portion) - k);
  if (dif < portion)
  {
    int r = portion;
    int c = dif + 1;
    cout << r << " " << c << endl;
  }
  else
  {
    int c = portion;
    dif -= portion;
    int r = portion - dif - 1;
    cout << r << " " << c << endl;
  }
}
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    solve();
  }

  return 0;
}