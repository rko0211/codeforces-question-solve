#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n,m,k,H; cin >> n >> m >> k >> H;
    int ans = 0;
    for(int i=0;i<n;i++) {
        int x; cin >> x;
        ans += (H != x) && abs(H - x) % k == 0 && abs(H-x) <= (m-1) * k;
    }
    cout << ans << endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}