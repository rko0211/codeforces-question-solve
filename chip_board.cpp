#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    ll sum1 =0;
    ll sum2=0;
    ll a[n],b[n]; for(int i=0;i<n;i++) {cin>>a[i];
    sum1+=a[i];
    }

    for(int j=0;j<n;j++) {cin>>b[j];
    sum2+=b[j];
    }
    sort(a,a+n);
    sort(b,b+n);
    if((sum2+ n*a[0])<= (sum1+ n*b[0])){
        sum2+=(n*a[0]);
        cout<<sum2<<endl;
        return;
    }
    else{
        sum1+=(n*b[0]);
        cout<<sum1<<endl;
        return;
    }


}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}