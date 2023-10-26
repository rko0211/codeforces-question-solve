#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    if(n>19){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    long long x = 1;
    for(int i=0;i<n;i++){
        cout<<x<<" ";
        x*=3;
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