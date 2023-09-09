#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
ll n,m; cin>>n>>m;
if(n<m){
    swap(n,m);
}
if(m==1 && n>=3){
    cout<<-1<<endl;
    return;
}

else{
    cout<<(2*n)-2-(n+m)%2<<endl;
}
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}