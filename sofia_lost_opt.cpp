#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  ll b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int j = 0; j < n; j++)
    cin >> b[j];
  int m;
  cin >> m;
  ll d[m];
  for (int i = 0; i < m; i++)
    cin >> d[i];

  map<ll, int> mp1;
  for (int i = 0; i < n; i++)
  {
    mp1[b[i]]++;
  }
  map<ll, int> mp2;
  for (int i = 0; i < m; i++)
  {
    mp2[d[i]]++;
  }
  if (mp1[d[m - 1]] == 0)
  {

    cout << "NO\n";
    return;
  }
  for (int i = 0; i < n; i++)
  {
    if (a[i] == b[i])
    {

      continue;
    }
    else
    {

      if (mp2[b[i]] <= 0)
      {
        cout << "NO\n";
        return;
      }
      mp2[b[i]]--;
    }
  }

  cout << "YES\n";
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