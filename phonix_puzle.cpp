#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    if(n==2){
        cout<<"YES\n";
        return;
    }
    if(n%2==1){
        cout<<"NO\n";
        return;
    }
    while(n>1){
        if(n%4!=0){
            cout<<"NO\n";
            return;
        }
        n/=4;
    }
    if(n==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }


    return 0;
}