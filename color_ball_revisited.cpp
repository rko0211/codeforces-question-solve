#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    int a[n];  for(int i=0;i<n;i++) cin>>a[i];
    int ind =0;
    int maxi= a[0];
     for(int i =1;i<n;i++){
        if(maxi<=a[i]){
            maxi = a[i];
            ind = i;
        }
     }
     cout<<ind+1<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}