#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;  
		cin>>n;
		ll prev = 0, cnt = 0;
        ll a,i;
		for(i=0;i<n;i++){
			cin>>a;
			cnt+=(a-prev)/120;
			prev = a;
		}
		cnt+=(1440-prev)/120;
		if(cnt >=2)cout<<"YES\n";
		else cout<<"NO\n";
    
}
int main(){


int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}