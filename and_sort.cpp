#include<bits/stdc++.h>
using namespace std;

int _TerrorAttack_()
{
     int n;
    cin >> n;
    int ans = (1 << 30) - 1;
    for(int i=0;i<n;++i) {
    	int x;
    	cin >> x;
    	if(x != i) {
    		ans &= x;
    	}
    }
    cout << ans << "\n";
    return 0;
}
int main(){
    int t; cin>>t;
    while(t--){
        _TerrorAttack_();
    }
    return 0;
}
