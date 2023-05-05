#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int mainval = a[0];
    int count=0;
    if(a[0]!=a[1]){
        count++;
    }
    for(int i=1;i<n-1;i++){
        if((a[i-1]!=a[i]) || (a[i]!=a[i+1])){
            count++;
        }
    }
    if(a[n-1]!=a[n-2]){
        count++;
    }
    cout<<count<<endl;
    
    }
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}