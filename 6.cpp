#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll h, n;
  cin >> h >> n;
  ll a[n];
  ll sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += a[i];
  }
  ll c[n];
  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
  }

  map<ll, ll> m;
  for (int i = 0; i < n; i++)
  {
    m[c[i]] += a[i];
  }

  int p = m.size();
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;

  int x = 0;
  vector<ll> val;
  vector<ll> next;
  for (auto &it : m)
  {
    pq.push({it.first + 1, x});
    x++;
    val.push_back(it.second);
    next.push_back(it.first);
  }

  ll ans = 1;
  h -= sum;
  while (h > 0)
  {
    ll turn = pq.top().first;
    int ind = pq.top().second;
    pq.pop();
    // cout << turn << " " << ind << endl;
    h -= val[ind];

    ans = turn;
    turn += next[ind];
    pq.push({turn, ind});
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