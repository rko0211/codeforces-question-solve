#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int maxlen = 1;
  int cnt = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (s[i] <= s[i + 1])
    {
      cnt++;
    }
    else
    {
      maxlen = max(maxlen, cnt);
      cnt = 1;
    }
  }
  maxlen = max(maxlen, cnt);
  s = '@' + s;
  // int i=1;
  for (int i = 1; i < n;)
  {
    if (s[i] == '0' && s[i + 1] == '0')
    {
      i += 2;
      continue;
    }
    int prev = i;
    int j = i + 2;
    // cout << i << " " << j << " ";
    while (j < n)
    {
      string t = "";
      t += (s[j]);
      t += s[j + 1];
      // if (t != "10")
      // {

      string t1 = "";
      string t2 = "";
      t1 += s[i];
      t1 += s[i + 1];
      t2 += s[j];
      t2 += s[j + 1];

      if (t1 != t2)
      {
        swap(s[i], s[j]);
        swap(s[i + 1], s[j + 1]);
        i = j;

        break;
      }
      // }
      j += 2;
    }
    // cout << s << endl;
    if (i == prev)
    {
      i += 2;
    }
  }

  cnt = 1;
  // cout << s << endl;
  for (int i = 1; i < n; i++)
  {
    if (s[i] <= s[i + 1])
    {
      cnt++;
    }
    else
    {
      maxlen = max(maxlen, cnt);
      cnt = 1;
    }
  }
  maxlen = max(maxlen, cnt);
  cout << maxlen << endl;
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