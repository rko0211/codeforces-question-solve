#include <bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<int> m(1e6 + 1, 0);
  // map<int, int> m;
  for (int i = 0; i < n; i++)
  {
    m[a[i]]++;
  }
  int ans = 1;

  for (int gcd = 1e6; gcd >= 1; gcd--)
  {
    int cnt = 0;
    for (int j = gcd; j <= 1e6; j += gcd)
    {
      cnt += m[j];
    }

    if (cnt > 1)
    {
      cout << gcd << endl;
      return 0;
    }
  }

  return 0;
}