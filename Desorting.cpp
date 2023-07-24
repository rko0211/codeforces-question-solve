#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag = false;
    for(int i=0;i<n-1;i++){
       if(a[i]>a[i+1]){
        flag = true;
        break;
       }
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
    int mindiff = INT_MAX;
    for(int i=0;i<n-1;i++){
        mindiff = min(mindiff,abs(a[i]-a[i+1]));
    }
    int ans = 0;
    ans = (mindiff/2 +1);
    cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}