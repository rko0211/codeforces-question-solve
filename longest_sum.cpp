#include<bits/stdc++.h>
using namespace std;
int main(){

int t; cin>>t;
while(t--){
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    int l1 = a[0];
    int l2;
    for(int i=1;i<n;i++){
        if(a[i]==l1){
         continue;
        }
        else{
            l2=a[i];
            break;
        }
    }
    cout<<(l1+l2)<<endl;
}

    return 0;
}