#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1005][1005];
bool visited[1005][1005];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool is_valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] > 0 && !visited[i][j];
}

int dfs(int i, int j) {
    visited[i][j] = true;
    int volume = a[i][j];
    for (int k = 0; k < 4; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];
        if (is_valid(ni, nj)) {
            volume += dfs(ni, nj);
        }
    }
    return volume;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                visited[i][j] = false;
            }
        }

        int max_volume = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (is_valid(i, j)) {
                    int volume = dfs(i, j);
                    max_volume = max(max_volume, volume);
                }
            }
        }

        cout << max_volume << endl;
    }

    return 0;
}