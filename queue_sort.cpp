#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
    int ind ;
    ll mini = LLONG_MAX;
    for(int i=0;i<n;i++){
        if(mini>a[i]){
            ind = i;
            mini = a[i];
        }
    } 

    for(int i=ind;i<n-1;i++){
        if(a[i]>a[i+1]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<ind<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}
