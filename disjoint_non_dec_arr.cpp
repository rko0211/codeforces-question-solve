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

  ll maxi = LLONG_MIN;
  maxi = max(maxi, a[0]);
  vector<int> index(n, -1);
  int x = 0;
  for (int i = 1; i < n; i++)
  {
    if (maxi <= a[i])
    {
      maxi = max(maxi, a[i]);
    }
    else
    {
      // maxi > a[i];
      index[x] = i;
      x++;
    }
  }
  // for (int i = 0; i < index.size(); i++)
  // {
  //   cout << index[i] << " ";
  // }
  // cout << endl;
  for (int i = 0; i < index.size() - 1; i++)
  {
    if ((index[i + 1] - index[i]) == 1)
    {
      cout << "No\n";
      return;
    }
  }
  ll mindif = 1000000000;

  for (int i = 0; i < index.size(); i++)
  {
    int ind = index[i];
    if ((ind + 1) < n)
      mindif = min(mindif, abs(a[ind + 1] - a[ind]));
  }
  // cout << mindif << endl;
  for (int i = 0; i < index.size(); i++)
  {

    int ind = index[i];
    if (ind != -1)
      a[ind] += mindif;
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] > a[i + 1])
    {
      cout << "No\n";
      return;
    }
  }
  cout << "Yes\n";
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