#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;  cin>>n;
    ll zcount=0; ll onecount=0;
    ll a[n];  for(int i=0;i<n;i++){cin>>a[i];
    if(a[i]==0){
        zcount++;
    }
    else if(a[i]==1){
        onecount++;
    }
    }
    ll ans;
  
     ans = pow(2,zcount)*onecount;


    cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}
    return 0;
}