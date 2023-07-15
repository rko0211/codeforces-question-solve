#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
int n ; cin>>n;
ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
unordered_set<ll>us;
for(int i=0;i<n;i++){
    us.insert(a[i]);
}
if(us.size()==1) {
    cout<<"YES\n";
    return;
}
int val= 0;
int val1=0;
val = count(a,a+n,1);
val1 = count(a,a+n,0);
if(val==0){
    cout<<"YES\n";
    return;
}
if(val1>0 && val>0){
    cout<<"NO\n";
    return;
}
sort(a,a+n);
bool f1 =false;
for(int i=0;i<n-1;i++){
    if(a[i]+1==a[i+1]){
        f1=true;
    }
}
if(f1){
    cout<<"NO\n";
}
else{
    cout<<"YES\n";
}






}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}