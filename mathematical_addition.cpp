#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    ll u, v;
    cin >> u >> v;
    cout << -(u * u) << " " << (v * v) << endl;
  }

  return 0;
}