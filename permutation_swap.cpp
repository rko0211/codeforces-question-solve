#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
    int a[n];  for(int i=0;i<n;i++)cin>>a[i];
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[a[i]] =(i+1);
    }
    int minval =0;
    for(int i =0;i<n;i++){
        if(a[i]>m[a[i]] || a[i]<m[a[i]]){
         minval = __gcd(minval,abs(a[i]-m[a[i]]));
        }
    }
    cout<<minval<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}

    return 0;
}