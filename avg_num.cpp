#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,v;  cin>>n>>k>>v;
    int sum=0;
    int a[n]; for(int i=0;i<n;i++){cin>>a[i];
    sum+=a[i];
}
int val = (v*(n+k));

val-=sum;
if(val>0 && val%k==0){
    cout<<val/k<<endl;
}
else{
    cout<<-1<<endl;
}
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}