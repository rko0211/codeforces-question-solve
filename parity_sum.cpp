#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  int n;
  cin >> n;
  ll a[n];
  vector<ll> odd, even;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    if ((a[i] % 2) == 1)
    {
      odd.push_back(a[i]);
    }
    else
    {
      even.push_back(a[i]);
    }
  }
  if (odd.size() == 0 || even.size() == 0)
  {
    cout << 0 << endl;
    return;
  }
  sort(odd.begin(), odd.end());
  sort(even.begin(), even.end());

  int i = odd.size() - 1;
  int j = 0;
  int ans = 0;
  ll maxval = odd[i];
  bool flag = false;
  int ind;
  while (j < even.size())
  {
    if (maxval >= even[j])
    {
      ans++;
      maxval += even[j];
    }
    else
    {
      if (!flag)
      {
        ans += 2;

        maxval += (2 * even[j]);
        ind = j;
        flag = true;
      }
      else
      {
        ans--;
        ans += 2;
        maxval -= even[ind];
        ind = j;
        maxval += (2 * even[j]);
      }
    }

    j++;
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