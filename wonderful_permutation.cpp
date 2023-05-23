#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k; cin>>n>>k;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    for(int i=0;i<k;i++){
        if(a[i]>k){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}