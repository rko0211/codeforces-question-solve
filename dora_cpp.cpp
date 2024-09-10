#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

  ll n, a, b;
  cin >> n >> a >> b;
  ll arr[n];
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  priority_queue<ll> maxA;
  priority_queue<ll, vector<ll>, greater<ll>> minA;
  priority_queue<ll> maxB;
  priority_queue<ll, vector<ll>, greater<ll>> minB;
  priority_queue<ll> maxmix1;
  priority_queue<ll, vector<ll>, greater<ll>> minmix1;
  priority_queue<ll> maxmix2;
  priority_queue<ll, vector<ll>, greater<ll>> minmix2;

  int x = 999;
  ll ans = LLONG_MAX;
  bool flag = false;
  while (x > 0)
  {

    for (int i = 0; i < n; i++)
    {
      maxA.push((arr[i] + a));
      minA.push((arr[i] + a));
      maxB.push((arr[i] + b));
      minB.push((arr[i] + b));

      if (!flag)
      {
        maxmix1.push(arr[i] + a);
        minmix1.push((arr[i] + a));
        maxmix2.push(arr[i] + b);
        minmix2.push((arr[i] + b));
        flag = true;
      }
      else
      {
        maxmix2.push(arr[i] + a);
        minmix2.push((arr[i] + a));
        maxmix1.push(arr[i] + b);
        minmix1.push((arr[i] + b));
      }
    }
    ans = min({ans, (maxA.top() - minA.top()), (maxB.top() - minB.top()), (maxmix1.top() - minmix1.top()), (maxmix2.top() - minmix2.top())});
    x--;
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