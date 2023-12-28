#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

int t; cin>>t;
while(t--){
    int n; cin>>n;
    ll sum =0;
    ll a[n]; for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}

    ll sqr_val = sqrt(sum);
    if((sqr_val*1LL*sqr_val)==sum){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    

}

    return 0;
}