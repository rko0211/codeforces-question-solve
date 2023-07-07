#include <bits/stdc++.h>


using namespace std;

void solve(){
    long long n; cin>>n;
    bool flag =0;
    for(long long i=2;i<=1000&&flag==0 ;i++){
        long long c=1;
        int s=0;
        c+=i;
        long long a = i*i;
        while(c<=n){
            c+=a;
            if(c==n){
                flag =true;
                break;
            }
            a*=i;
        }
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
      solve();
    }

    return 0;
}
