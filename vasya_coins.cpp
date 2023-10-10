#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b; cin>>a>>b;
    if(a==0){
        cout<<(a+1)<<endl;
        return;
    }
    if(b==0){
        cout<<(a+1)<<endl;
        return;
    }

    cout<<(a+(2*b))+1<<endl;
}
int main(){



int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}