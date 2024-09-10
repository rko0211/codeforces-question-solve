#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k;
  cin >> n >> k;
  int a[k];
  for (int i = 0; i < k; i++)
  {
    cin >> a[i];
  }
  int t[k];
  for (int i = 0; i < k; i++)
  {
    cin >> t[i];
  }

  // int ind = 1;
  for (int ind = 1; ind <= n; ind++)
  {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
      pq.push((t[i] + abs(a[i] - ind)));
    }

    cout << pq.top() << " ";
  }
  cout << endl;
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