#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    if(n==1){
        cout<<"NO\n";
        return ;
    }
   ll no_one=0;
   ll othernumber=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) no_one++;
        else no_one-=(a[i]-1);
    }
    if(no_one>0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}