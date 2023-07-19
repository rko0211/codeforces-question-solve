#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    ll a[n]; for(int i =0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll sum =0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<sum<<" ";
    for(int i=0;i<n-1;i++){
        sum -=a[i];
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}