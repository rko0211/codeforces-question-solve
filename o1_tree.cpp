#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
    deque<pair<int, int>> q;
    q.push_back({a[0], 1});
    int idx = 1;
    while(!q.empty()) {
        auto [d, cnt] = q.front();
        q.pop_front();
        if(idx + cnt - 1 >= n || a[idx + cnt - 1] != d) {
            cout << "NO" << "\n";
            return;
        }
        if(idx + cnt < n && a[idx + cnt] == d) {
            q.push_back({d, cnt + 1});
            idx++;
        } else {
            q.push_back({d + 1, 1});
            idx += cnt;
        }
    }
    cout << "YES" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
