#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  string w;
  cin >> w;
  if (n < 2)
  {
    cout << "NO\n";
    return;
  }
  if (n == 2)
  {
    if (w[0] == w[1])
    {
      cout << "RH\n";
    }
    else
    {
      cout << "NO\n";
    }
    return;
  }
  int N = 0, S = 0, W = 0, E = 0;
  for (int i = 0; i < n; i++)
  {
    if (w[i] == 'N')
    {
      N++;
    }
    else if (w[i] == 'S')
    {
      S++;
    }
    else if (w[i] == 'W')
    {
      W++;
    }
    else
    {
      E++;
    }
  }
  char temp_ans[n];
  for (int i = 0; i < n; i++)
  {
    temp_ans[i] = '@';
  }
  int v1 = min(N, S);
  int v2 = min(W, E);
  N -= v1;
  S -= v1;

  W -= v2;
  E -= v2;
  int t1 = v1;
  int t2 = v2;
  bool f = false;

  for (int i = 0; i < n && v1 > 0; i++)
  {

    if (w[i] == 'N')
    {
      if (f == false)
      {
        temp_ans[i] = 'H';
        f = true;
      }
      else
      {
        temp_ans[i] = 'R';
      }
      v1--;
    }
  }

  for (int i = 0; i < n && t1 > 0; i++)
  {
    if (w[i] == 'S')
    {
      if (f == true)
      {
        temp_ans[i] = 'H';
        f = false;
      }
      else
      {
        temp_ans[i] = 'R';
      }
      t1--;
    }
  }
  f = false;
  for (int i = 0; i < n && v2 > 0; i++)
  {
    if (w[i] == 'W')
    {
      if (f == false)
      {
        temp_ans[i] = 'R';
        f = true;
      }
      else
      {
        temp_ans[i] = 'H';
      }
      v2--;
    }
  }

  for (int i = 0; i < n && t2 > 0; i++)
  {
    if (w[i] == 'E')
    {
      if (f == true)
      {
        temp_ans[i] = 'R';
        f = false;
      }
      else
      {
        temp_ans[i] = 'H';
      }
      t2--;
    }
  }

  if (S % 2 != 0 || N % 2 != 0 || E % 2 != 0 || W % 2 != 0)
  {
    cout << "NO\n";
    return;
  }

  v1 = N;
  bool flag = false;
  for (int i = 0; i < n && v1 > 0; i++)
  {
    if (w[i] == 'N' && temp_ans[i] == '@')
    {
      if (flag == false)
      {
        temp_ans[i] = 'R';
        flag = true;
      }
      else
      {
        temp_ans[i] = 'H';
        flag = false;
      }
      v1--;
    }
  }

  v1 = S;
  flag = false;
  for (int i = 0; i < n && v1 > 0; i++)
  {
    if (w[i] == 'S' && temp_ans[i] == '@')
    {
      if (flag == false)
      {
        temp_ans[i] = 'R';
        flag = true;
      }
      else
      {
        temp_ans[i] = 'H';
        flag = false;
      }
      v1--;
    }
  }

  v1 = E;
  flag = false;
  for (int i = 0; i < n && v1 > 0; i++)
  {
    if (w[i] == 'E' && temp_ans[i] == '@')
    {
      if (flag == false)
      {
        temp_ans[i] = 'R';
        flag = true;
      }
      else
      {
        temp_ans[i] = 'H';
        flag = false;
      }
      v1--;
    }
  }

  v1 = W;
  flag = false;
  for (int i = 0; i < n && v1 > 0; i++)
  {
    if (w[i] == 'W' && temp_ans[i] == '@')
    {
      if (flag == false)
      {
        temp_ans[i] = 'R';
        flag = true;
      }
      else
      {
        temp_ans[i] = 'H';
        flag = false;
      }
      v1--;
    }
  }
  string ans = "";
  for (int i = 0; i < n; i++)
  {
    ans += temp_ans[i];
  }
  cout << ans << endl;
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