#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> digit;
  vector<char> letter;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      if (letter.size() != 0)
      {
        cout << "NO\n";
        return;
      }
      digit.push_back(s[i] - '0');
    }
    else
    {
      letter.push_back(s[i]);
    }
  }

  // if (letter.size() == 0 || digit.size() == 0)
  // {
  //   cout << "NO\n";
  //   return;
  // }

  int p = digit.size();

  for (int i = 0; i < p - 1; i++)
  {
    if (digit[i] > digit[i + 1])
    {
      cout << "NO\n";
      return;
    }
  }

  int q = letter.size();

  for (int i = 0; i < q - 1; i++)
  {
    if (letter[i] > letter[i + 1])
    {
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
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