#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k; cin>>n>>k;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];
    int cnt=0;
    for(int i=1;i<(n-1);i++){
        if((a[i]>(a[i-1]+a[i+1]))){
            cnt++;
        }
    }
  if(k==1){
    cout<<(n-1)/2<<endl;
    return;
  }
cout<<cnt<<endl;
}
int main(){


int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}