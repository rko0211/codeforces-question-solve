#include<bits/stdc++.h>
using namespace std;

bool solve(){
    int n;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        if((a[i] % 2) != (b[i] % 2)) return false;
    }
    return true;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        cout << (solve() ? "YES" : "NO") << "\n";
    }
    return 0;
}