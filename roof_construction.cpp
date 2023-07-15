#include<bits/stdc++.h>
using namespace std;
int msb(int x){
    // return msb bit of x either 0 or 1
    return log2(x);
}
void solve(){
    int n;  cin>>n;

    if(n==2){
        cout<<0<<" "<<1<<endl;
        return;
    }
    int val = n-1;
    while(val>1){
        cout<<val<<" ";
        if(msb(val)!=msb(val-1)) break;
        val--;
    }
    for(int i=0;i<=val-1;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}