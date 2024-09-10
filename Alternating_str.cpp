#include <bits/stdc++.h>
using namespace std;
int f(string s)
{
  map<char, int> even, odd;
  int even_max = INT_MIN;
  int odd_max = INT_MIN;
  int evensum = 0;
  int oddsum = 0;
  for (int i = 0; i < s.size(); i += 2)
  {
    even[s[i]]++;
    even_max = max(even_max, even[s[i]]);
  }
  for (int j = 1; j < s.size(); j += 2)
  {
    odd[s[j]]++;
    odd_max = max(odd_max, odd[s[j]]);
  }

  int n = s.size();
  return ((n / 2 - even_max) + (n / 2 - odd_max));
}
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if (n == 1)
  {
    cout << 1 << endl;
    return;
  }
  if (n % 2 == 0)
  {
    cout << f(s) << endl;
  }
  else
  {
    int ans = INT_MAX;

    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
      mp[s[i]]++;
    }

    for (int i = 0; i < 26; i++)
    {
      char ch = 'a' + i;
      if (mp[ch] > 0)
      {
        string temp1 = "";
        string temp2 = "";
        bool flag1 = false;
        bool flag2 = false;
        for (int i = 0; i < n; i++)
        {
          if (!flag1 && i % 2 == 0 && s[i] == ch)
          {
            flag1 = true;
          }
          else
          {
            temp1 += s[i];
          }

          if (!flag2 && i % 2 == 1 && s[i] == ch)
          {
            flag2 = true;
          }
          else
          {
            temp2 += s[i];
          }
        }
        flag1 = false;
        flag2 = false;
        string temp3 = "";
        string temp4 = "";
        for (int i = n - 1; i >= 0; i--)
        {
          if (!flag1 && i % 2 == 0 && s[i] == ch)
          {
            flag1 = true;
          }
          else
          {
            temp3 += s[i];
          }

          if (!flag2 && i % 2 == 1 && s[i] == ch)
          {
            flag2 = true;
          }
          else
          {
            temp4 += s[i];
          }
        }
        int n1 = temp1.size();
        int n2 = temp2.size();
        int n3 = temp3.size();
        int n4 = temp4.size();
        int res1 = INT_MAX;
        int res2 = INT_MAX;
        int res3 = INT_MAX;
        int res4 = INT_MAX;
        if (n1 % 2 == 0)
        {
          res1 = f(temp1);
        }
        if (n2 % 2 == 0)
        {
          res2 = f(temp2);
        }
        if (n3 % 2 == 0)
        {
          res3 = f(temp3);
        }
        if (n4 % 2 == 0)
        {
          res4 = f(temp4);
        }
        // cout << temp1 << " " << res1 << " " << temp2 << " " << res2 << endl;
        ans = min({ans, res1, res2, res3, res4});
        // cout << ans << endl;
      }
    }

    cout << ans + 1 << endl;
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    /* code */
    solve();
  }

  return 0;
}