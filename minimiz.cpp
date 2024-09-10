#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b;
    cin >> a >> b;
    int val = (a + b) / 2;
    cout << (val - a) + (b - val) << endl;
  }

  return 0;
}