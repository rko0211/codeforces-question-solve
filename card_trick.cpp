#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>m;
    int b[m];
    long long int sum =0;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        sum+=b[i];
    }
    int ind = sum%n;
    cout<<a[ind]<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}