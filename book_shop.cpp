#include <bits/stdc++.h>
using namespace std;
int f(int ind, int x, vector<int> h, vector<int> s, vector<vector<int>> &dp)
{
    // Base case

    if (ind == 0|| x==0)
    {
        return 0;
    }
  
    if (dp[ind][x] != -1)
        return dp[ind][x];

    if (h[ind-1] > x)
    {
        dp[ind][x] = f(ind - 1, x, h, s, dp);
    }
    else
    {
        int notpick = f(ind - 1, x, h, s, dp);

        // Each book should be purchase only onece
        int pick = s[ind-1] + f(ind - 1, x - h[ind-1], h, s, dp);

        
        dp[ind][x] = max(pick, notpick);
    }
    // Not pick

    return dp[ind][x];
}
int main()
{

    int n, x;
    cin >> n >> x;
    vector<int> h(n), s(n);
    for (int i = 0; i < n; i++)
        cin >> h[i];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    vector<vector<int>> dp(n+1, vector<int>(x + 1, -1));
    cout << f(n , x, h, s, dp) << endl;

    return 0;
}