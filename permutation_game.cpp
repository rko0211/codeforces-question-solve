#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
  ll n, k, pb, ps;
  cin >> n >> k >> pb >> ps;
  int p[n];
  ll a[n];
  for (int i = 0; i < n; i++)
    cin >> p[i];
  for (int j = 0; j < n; j++)
    cin >> a[j];

  ll bob = 0;
  ll sasa = 0;
  int ind1 = pb - 1;
  int ind2 = ps - 1;

  vector<ll> sasha;
  vector<ll> bodya;
  int i = 0;
  ll v1 = 0;
  ll v2 = 0;
  int cnt = 0;
  while (i < min(n, k))
  {
    ll t1 = (a[ind1]);

    bodya.push_back(((k - cnt) * t1 + bob));
    bob += a[ind1];
    ind1 = p[ind1] - 1;

    ll t2 = a[ind2];

    sasha.push_back(((k - cnt) * t2 + sasa));
    sasa += a[ind2];
    ind2 = p[ind2] - 1;

    cnt++;
    i++;
  }
  bob = 0;
  sasa = 0;
  for (auto &it : sasha)
  {
    sasa = max(sasa, it);
  }
  for (auto &it : bodya)
  {
    bob = max(bob, it);
  }

  if (bob == sasa)
  {
    cout << "Draw\n";
  }
  else if (bob > sasa)
  {
    cout << "Bodya\n";
  }
  else
  {
    cout << "Sasha\n";
  }
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