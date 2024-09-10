#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n <= 2)
  {
    int val = ((s[0] - '0') * 10);
    val += (s[1] - '0');
    cout << val << endl;
    return;
  }

  if (s[0] == '0' || s[n - 1] == '0')
  {
    cout << 0 << endl;
    return;
  }
  bool zero = false;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      zero = true;
      break;
    }
  }
  if (zero && (n - 2) >= 2)
  {
    cout << 0 << endl;
    return;
  }

  int val;
  int ans = INT_MAX;
  for (int i = 0; i < n - 1; i++)
  {
    string str = "";
    str += s[i];
    str += s[i + 1];
    val = stoi(str);
    // cout << val << endl;
    for (int j = i - 1; j >= 0; j--)
    {
      if (val == 1)
      {
        val *= (s[j] - '0');
      }
      else if (s[j] != '1')
      {
        val += (s[j] - '0');
      }
    }
    for (int j = i + 2; j < n; j++)
    {
      if (val == 1)
      {
        val *= (s[j] - '0');
      }
      else if (s[j] != '1')
      {
        val += (s[j] - '0');
      }
    }
    ans = min(ans, val);
  }

  cout << int(ans) << endl;
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