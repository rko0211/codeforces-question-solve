#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;  cin>>n>>q;
    int a[n];int b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int ans=-1; int entertainment_val=0;
    for(int i=0;i<n;i++){

    if(a[i]<=q && entertainment_val<b[i]){
        ans=i+1;
   entertainment_val=b[i];
    }

    q--;

    }
    cout<<ans<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}