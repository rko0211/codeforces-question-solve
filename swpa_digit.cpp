#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    string ra = a, rb = b;
    reverse(ra.begin(), ra.end());
    reverse(rb.begin(), rb.end());
    if (stoi(a) > stoi(b) || stoi(ra) > stoi(b) || stoi(a) > stoi(rb) || stoi(ra) > stoi(rb))
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }

  return 0;
}
