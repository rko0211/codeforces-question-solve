#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n]; for(int i=0;i<n;i++) cin>>a[i];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]] = (i+1);
    }
int value =0;
int inc =0;
   for(int i=1;i<n;i++){
   if(m[i]<m[i+1]){
    inc++;
   }
   else if(inc>0){
    value+=(inc);
    inc =0;
   }
   
   }
   if(inc>0)
   value+=inc;
   
//  cout<<value<<endl;

   cout<<(n-value-1)<<endl;

}
int main(){


int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}