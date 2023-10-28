#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int,int>um;
    for(int i=0;i<n;i++){
        um[a[i]]++;
    }
    if(um.size()>2){
        cout<<"No\n";
        return;
    }
    int arr[2] = {0};
    int i=0;
    for(auto &it:um){
        arr[i++] = it.second;
    }
    if(um.size()==1 ||abs(arr[0]-arr[1])<=1){
        cout<<"Yes\n";
        return;

    }
    else{
        cout<<"No\n";
    }
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}