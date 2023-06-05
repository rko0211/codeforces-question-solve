#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(y%x!=0){
        cout<<0<<" "<<0<<endl;
        return ;
    }
    cout<<1<<" "<<y/x<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}