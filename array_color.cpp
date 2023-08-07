#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    int val1 =0;
    int val2 =0;
    for(int i=1;i<n;i++){
        val2+=a[i];
    }
    val1+=a[0];
    if(val1%2==val2%2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}