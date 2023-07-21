#include<bits/stdc++.h>
using namespace std;
int main(){

int t; cin>>t;
while(t--){
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);
    if(a[2]+a[1]>=10) cout<<"YES\n";
    else cout<<"NO\n";
}
    return 0;
}