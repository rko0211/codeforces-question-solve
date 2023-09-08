#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n,x,y;
    cin>>n>>x>>y;

ll common = (x*y)/__gcd(x,y);
ll common_index = n/common;
ll noOfxele = n/x;
ll noOfyele = n/y;
noOfxele-=common_index;
noOfyele-=common_index;

ll sumY = noOfyele*(noOfyele+1)/2;
ll sumX = noOfxele* (n+(n-noOfxele+1))/2;

cout<<(sumX-sumY)<<endl;


}
int main(){


int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// int max_score(int n, int x, int y) {
//   vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(n + 1, vector<int>(2)));
//   dp[0][0][0] = 0;
//   dp[1][1][0] = x;
//   dp[1][1][1] = y;
//   for (int i = 2; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       for (int k = 0; k <= 1; k++) {
//         dp[i][j][k] = max(dp[i - 1][j][k], dp[i - 1][j - 1][k - 1] + x, dp[i - 1][j - 1][k] + y);
//       }
//     }
//   }
//   return dp[n][n][0];
// }

// int main() {
//   int n, x, y;
//   cin >> n >> x >> y;
//   cout << max_score(n, x, y) << endl;
//   return 0;
// }