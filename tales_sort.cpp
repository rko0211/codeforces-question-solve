#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
   ll a[n];  for(int i=0;i<n;i++) cin>>a[i];
 

   ll b[n];
   for(int i=0;i<n;i++){
    b[i] = a[i];
   }
   sort(b,b+n);
   ll ans =0;
   for(int i=n-1;i>=0;i--){
    if(a[i]!=b[i]){
        ans = b[i];
        break;
    }
   }
   cout<<ans<<endl;

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}