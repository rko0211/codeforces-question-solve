#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    // sort(a,a+n);
    // sort(b,b+n);
    // int i=0;.
    for(int j=n-1;j>=0;j--){
        if(a[j]>b[j]){
            swap(a[j],b[j]);
           
        }
    }
    int l1 = INT_MIN;
    int l2 = INT_MIN;
    for(int i=0;i<n;i++){
        l1 = max(a[i],l1);
        l2 = max(b[i],l2);
    }
    cout<<(l1*l2)<<endl;
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}


    return 0;
}