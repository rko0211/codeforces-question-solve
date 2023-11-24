#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x; cin>>n>>x;
    int maxi = INT_MIN;
    int a[n]; for(int i=0;i<n;i++){
        cin>>a[i];
    }
    maxi = max(maxi,(a[0]));
    for(int i=1;i<n;i++){
      maxi = max(maxi,(a[i]-a[i-1]));
    }
    if((2*(x-a[n-1])) <=maxi){
        cout<<maxi<<endl;
    }
    else{
        cout<<(maxi+((2*(x-a[n-1]))-maxi))<<endl;
    }

}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}