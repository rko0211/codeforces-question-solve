#include<bits/stdc++.h>
using namespace std;
char s[200005];
void solve(){
    int n; 
   cin >> n;  s[n + 1] = 'C';
		for (int i = 1; i <= n; ++i) cin >> s[i];
		int pt1 = 1, pt2 = 1, ans = 0;
		while (s[pt1] == 'B') ++pt1, ++pt2;
		while (pt1 <= n) {
			int cntA = 0, cntB = 0;
			while (s[pt2] == 'A') ++pt2, ++cntA;
			while (s[pt2] == 'B') ++pt2, ++cntB;
			if (s[pt2 - 1] == 'B') ans += pt2 - pt1 - 1;
			if (cntB) pt1 = pt2 - 1;
			else break;
		}
		cout << ans << '\n';

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}