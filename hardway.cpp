#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>
#include <map>
#include <set>
#include <cmath>
#include <array>
 
using namespace std;
 
signed main() {
    if (1) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, e, f, ans = 0;
        cin >> b >> a >> d >> c >> f >> e;
        if (a == c && e < a) ans = abs(b - d);
        else if (c == e && a < c) ans = abs(d - f);
        else if (a == e && c < a) ans = abs(b - f);
        cout << ans << "\n";
    }
}
