#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int ind = -1;
  for (int i = 1; i < n; i++)
  {
    if (a[0] < a[i])
    {
      ind = i + 1;
      break;
    }
  }
  cout << ind << endl;
}
int main()
{

  solve();

  return 0;
}