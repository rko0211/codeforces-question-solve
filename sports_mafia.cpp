#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
ll n,k; cin>>n>>k;

ll lo =-1 ; ll hi = n+1;
ll ans=0 ;
while(hi-lo>1 ){
    ll mid = lo+(hi-lo)/2;
      if ((n - mid) * (n - mid + 1) / 2 - mid > k)
            lo = mid;
        else
            hi = mid;
}
cout<<hi<<endl;


    return 0;
}