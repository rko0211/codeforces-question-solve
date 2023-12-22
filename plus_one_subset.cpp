#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        mini = min(mini,a[i]);
        maxi = max(maxi,a[i]);
    }
    cout<<(maxi-mini)<<endl;
    
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}



    return 0;
}
