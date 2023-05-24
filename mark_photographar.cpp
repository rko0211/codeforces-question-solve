#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, x;  cin>>n>>x;
    int a[(2*n)]; for(int i=0;i<(2*n);i++) cin>>a[i];
    sort(a,a+(2*n));
    int i =0;
    int j = (2*n)/2;
    int count =0;
    while(j<(2*n)){
   if((a[j]-a[i])>=x){
    count++;
   }
   else{
    cout<<"NO\n";
    return;
   }
   j++;
   i++;
    }
    cout<<"YES\n";
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}