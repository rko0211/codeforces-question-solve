#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n1;
  cin >> n1;
  string s;
  cin >> s;
  vector<vector<char>> back(n1, vector<char>(4)), front(n1, vector<char>(5));
  int b = 0;
  int a = 0;
  int c = 0;
  int k = 0;

  for (int i = 0; i < n1; i++)
  {
    if (s[i] == 'b')
    {
      back[b][0] = 'b';
      b++;
    }
    else if (s[i] == 'a')
    {
      if (back[a][0] == 'b')
      {
        back[a][1] = 'a';
        a++;
      }
    }
    else if (s[i] == 'c')
    {
      if (back[c][1] == 'a')
      {
        back[c][2] = 'c';
        c++;
      }
    }
    else if (s[i] == 'k')
    {
      if (back[k][2] == 'c')
      {
        back[k][3] = 'k';
        k++;
        back[b][0] = 'b';
        b++;
      }
    }
  }

  int f = 0;
  int r = 0;
  int o = 0;
  int n = 0;
  int t = 0;
  for (int i = 0; i < n1; i++)
  {
    if (s[i] == 'f')
    {
      front[f][0] = 'f';
      f++;
    }
    else if (s[i] == 'r')
    {
      if (front[r][0] == 'f')
      {
        front[r][1] = 'r';
        r++;
      }
    }
    else if (s[i] == 'o')
    {
      if (front[o][1] == 'r')
      {
        front[o][2] = 'o';
        o++;
      }
    }
    else if (s[i] == 'n')
    {
      if (front[n][2] == 'o')
      {
        front[n][3] = 'n';
        n++;
      }
    }

    else if (s[i] == 't')
    {
      if (front[t][3] == 'n')
      {
        front[t][4] = 't';
        t++;

        front[t][4] = 't';
        t++;
      }
    }
  }

  int ans = s.size();
  for (int i = 0; i < n1; i++)
  {
    string str = "";
    for (int j = 0; j < 4; j++)
    {
      str += (back[i][j]);
    }
    // cout << str << endl;
    if (str == "back")
    {
      ans -= 3;
    }
  }
  // cout << endl;
  for (int i = 0; i < n1; i++)
  {
    string str = "";
    for (int j = 0; j < 5; j++)
    {
      str += (front[i][j]);
    }
    cout << str << endl;
    if (str == "front")
    {
      ans -= 4;
    }
  }
  cout << endl;
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