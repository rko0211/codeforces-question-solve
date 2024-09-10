#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  long a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  long b[(n + 1)];
  long tb[(n + 1)];
  for (int i = 0; i < (n + 1); i++)
  {
    cin >> b[i];
  }

  long long ans = 0;
  long mini = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    ans += abs(a[i] - b[i]);

    if ((b[n] >= a[i] && b[n] <= b[i]) || ((b[n] <= a[i] && b[n] >= b[i])))
    {
      mini = 0;
    }
  }

  if (mini == 0)
  {
    ans++;
  }

  else
  {
    mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      mini = min(mini, abs(a[i] - b[n]));
      mini = min(mini, abs(b[i] - b[n]));
    }
    ans += (mini + 1);
  }
  cout << ans << endl;
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