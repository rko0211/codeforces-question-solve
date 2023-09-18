#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve(){
    int n; cin>>n;
    ll a[n]; for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
   int f[n]={0};
int j =0;
   for(int i=1;i<n;i+=2){
    f[i]=a[j++];

   }

   for(int i=0;i<n;i++){
    if(f[i]==0){
        f[i]=a[j++];
    }
   }

int ans =0;
   for(int i=1;i<n-1;i++){
    if((f[i]<f[i-1]) && (f[i]<f[i+1])) ans++;
   }

   cout<<ans<<endl;
   for(int i=0;i<n;i++){
    cout<<f[i]<<" ";
   }
    
    cout<<endl;


}
int main(){



    solve();

    return 0;
}