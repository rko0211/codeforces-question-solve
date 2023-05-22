#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;  cin>>n>>m;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=a[i];
    }
    if(m>=sum){
        cout<<0<<endl;
        return;
    }
    cout<<abs(sum-m)<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();

}
    return 0;
}