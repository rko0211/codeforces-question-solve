#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int siz = 2*(1e5)+1;
void solve(){
    int n; cin>>n;
    ll k; cin>>k;
    if(k>30){
        cout<<0<<endl;
        return;
    }
ll dp[siz];
dp[0] = 1;
dp[1] = 1;
for(int i=2;i<=30;i++){
    dp[i] = (dp[i-1]+dp[i-2]);
}
int i=0;
int cnt =0;

for(int i=0;i<=n/2;i++){
    ll fval = (n-(dp[k-1]*i));
    if(fval%dp[k-2]==0 ){
        if(fval/dp[k-2]>=0)
        cnt++;
    }
}
cout<<cnt<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}