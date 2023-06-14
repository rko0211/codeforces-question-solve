#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; cin >> t;
    for(int tc = 1; tc <= t; ++tc) {

        int n; cin >> n;
        int mn = INT_MAX, mx = INT_MIN;

        for(int i = 0; i < n; ++i) {
            int x; cin >> x;
            mn = min(mn, x);
            mx = max(mx, x);
        }

        if(mn < 0) cout << mn << '\n';
        else cout << mx << '\n';
    }
}