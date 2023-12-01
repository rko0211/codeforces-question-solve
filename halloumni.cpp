#include<bits/stdc++.h>
using namespace std;
bool isSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return false;
        }
    }
    return true;
}
void solve(){
    int n,k; cin>>n>>k;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    if(isSort(a,n)){
        cout<<"YES\n";
    }
    else{
        if(k>1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}