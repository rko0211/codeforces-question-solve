#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
ll n;  cin>>n;

ll ans;
if(n==1){
    cout<<2<<endl;
    return;
}
if(n%3==0){
    ans=n/3;
}
else {
    ans = n/3+1;
}
cout<<ans<<endl;


}
int main(){
int t;cin>>t;
while(t--)
solve();
    return 0;
}