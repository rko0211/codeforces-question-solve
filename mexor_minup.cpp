#include<bits/stdc++.h>
using namespace std;

int xr_arr[300005];
void solve(){
    int mex,xr; cin>>mex>>xr;
    // if(mex==xr){
    //     cout<<(mex+2)<<endl;
    //     return;
    // }
int val = xr_arr[mex-1];
if(val==xr){
    cout<<mex<<endl;
}
else{
    int ans = mex+1;
    if((val^xr)==mex){
        ans++;
    }
    cout<<ans<<endl;
}
    

}
int main(){
for(int i=1;i<300005;i++){
 xr_arr[i] = (xr_arr[i-1]^i);
}
int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}