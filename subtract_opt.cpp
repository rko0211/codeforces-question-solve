#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    ll k;  cin>>k;

    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
   int i=0;
   int j =0;
   while(j<n && i<n){
    if((a[j]-a[i])==k){
        cout<<"YES\n";
        return;
    }
    else if((a[j]-a[i])>k){
        i++;
    }
    else{
        j++;
    }
   }
   cout<<"NO\n";
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}