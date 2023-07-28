#include<bits/stdc++.h>
using namespace std;
void solve(){
    int b,c,h; cin>>b>>c>>h;
    int  ans;
    if(b<=(c+h)){
        ans = 2*b-1;
    }
    else{
        ans = 2*(c+h)+1;
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