#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

int t;  cin>>t;
while(t--){
    ll n,m;  cin>>n>>m;
    cout<<((m*1LL*(m-1))/2 + (m*1LL*((n*1LL*(n+1))/2)))<<endl;
}

    return 0;
}