#include <bits/stdc++.h>
using namespace std;

#define int ll

using ll = long long;
using pii = pair<int, int>;

int t;

const int N = 2e5 + 20;
int n, val[3][N];

int tot, ord[3], ans[6];

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  cin >> t;
  while (t--)
  {
    tot = 0;

    cin >> n;

    for (int j = 0; j < 3; j++)
      for (int i = 0; i < n; i++)
      {
        cin >> val[j][i];
        if (!j)
          tot += val[j][i];
      }

    iota(ord, ord + 3, 0);

    bool flag = false;

    do
    {
      int cur = 0, ptr = 0, sum = 0;
      vector<int> vec;

      while (ptr < n)
      {
        sum += val[ord[cur]][ptr];
        if (3 * sum >= tot)
        {
          vec.push_back(ptr);
          cur++;
          sum = 0;
        }
        if (cur == 3)
          break;

        ptr++;
      }

      // cout << '\t' << vec.size() << '\n';
      // for (int x: vec) cout << '\t' << x;
      // cout << '\n';

      if (cur == 3)
      {
        vec[2] = n - 1;
        int last = 0;
        for (int i = 0; i < 3; i++)
        {
          ans[2 * ord[i]] = last;
          ans[2 * ord[i] + 1] = vec[i];
          last = vec[i] + 1;
        }

        for (int i = 0; i < 6; i++)
          cout << ans[i] + 1 << ' ';
        cout << '\n';

        flag = true;
        break;
      }
    } while (next_permutation(ord, ord + 3));

    if (!flag)
      cout << "-1\n";
  }
}