#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    int i=1;
    int j = n;
    while(i<=k){
        cout<<i<<" ";
        i++;
    }
    while(j>=i){
        cout<<j<<" ";
        j--;
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