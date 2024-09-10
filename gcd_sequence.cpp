#include <bits/stdc++.h>
using namespace std;
bool helper(vector<int> &gc)
{
  vector<int> v;
  for (int i = 0; i < gc.size() - 1; i++)
  {
    v.push_back(__gcd(gc[i], gc[i + 1]));
  }
  for (int i = 0; i < v.size() - 1; i++)
  {
    if (v[i] > v[i + 1])
    {
      return false;
    }
  }

  return true;
}
void solve()
{
  int n;
  cin >> n;
  long long a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> v;
  for (int i = 0; i < n - 1; i++)
  {
    v.push_back(__gcd(a[i], a[i + 1]));
  }
  bool isrequired = false;
  int ind;
  for (int i = 1; i < v.size(); i++)
  {
    if (v[i - 1] > v[i])
    {
      isrequired = true;
      ind = i;
      break;
    }
  }
  if (!isrequired)
  {
    cout << "YES\n";
    return;
  }

  for (int j = ind - 1; j <= ind + 1; j++)
  {
    vector<int> gc;
    for (int i = 0; i < n; i++)
    {
      if (i != j)
      {
        gc.push_back(a[i]);
      }
    }
    if (helper(gc))
    {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
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
