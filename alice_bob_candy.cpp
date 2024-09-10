#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll alice = 0;
  ll bob = 0;
  ll cnt = 0;
  alice = a[0];
  cnt = 1;
  int i = 1;
  int j = n - 1;
  bool f = false;
  ll ap = alice;
  ll bp = 0;
  while (i <= j)
  {
    // Bob move
    if (!f)
    {
      while (i <= j && ap >= bp)
      {
        bp += a[j];
        j--;
      }

      bob += bp;
      cnt++;

      ap = 0;
      f = true;
    }
    else
    {
      while (i <= j && bp >= ap)
      {
        ap += a[i];
        i++;
      }

      alice += ap;
      cnt++;

      bp = 0;
      f = false;
    }
  }

  cout << cnt << " " << alice << " " << bob << endl;
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