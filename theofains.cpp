#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    long long  a[n]; for(int i=0;i<n;i++)cin>>a[i];
    long long suf[n+1]={0};
    for(int i=n-1;i>=0;i--){
        suf[i] = suf[i+1]+a[i];
    }
    long long ans =suf[0];
    for(int i=1;i<n;i++){
        if(suf[i]>0){
            ans+=suf[i];
        }
    }
    cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}