#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y,k; cin>>x>>y>>k;
    int ans;
    if(y<=x){
        ans = y;
        ans+=(x-y);
        cout<<ans<<endl;
        return ;
    }
    else{
        // y>x
        ans = x;
        int dif = (y-x);
        if(dif<=k){
            ans+=dif;
        }
        else{
          ans+=k;
          int val = (y-ans);
          ans+=(2*val);
        }

        cout<<ans<<endl;

    }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}