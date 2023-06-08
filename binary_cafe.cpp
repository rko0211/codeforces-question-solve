#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7
void solve(){
     int  n,k; 
     cin>>n>>k;
    k = min(k,30);
    cout<<min(n,((1<<k)-1))+1<<endl;
   
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}