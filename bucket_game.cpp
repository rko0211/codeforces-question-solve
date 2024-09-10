#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  int odd = 0;
  int one = 0;
  int even = 0;
  bool flag = false;
  for (int i = 0; i < n; i++)
  {

    if (a[i] % 2 == 1)
    {
      odd++;
      if (flag == false && a[i] == 1)
      {
        one++;
      }
      else
      {
        one = 0;
        flag = true;
      }
    }
    else
    {
      even++;
    }
  }

  if (one > 0 && even == 0 && one % 2 == 0)
  {
    cout << "Draw\n";
    return;
  }
  if (odd % 2 == 1)
  {
    cout << "Alice\n";
  }
  else
  {
    cout << "Bob\n";
  }
}
int main()
{
  // your code goes here

  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}
