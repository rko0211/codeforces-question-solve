#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    if(n==1){
        cout<<n<<endl;
        return;
    }
    if(n==2){
        cout<<"2 1"<<endl;
        return;
    }
    if(n==3){
        cout<<"2 1 3"<<endl;
        return;
    }
    int a[n]={0};
    a[0] =3;
    a[n-1] = 2;
    int x = (n)/2;
    a[x] = 1;

int k =4;
for(int i=1;i<n-1;i++){
   if(a[i]==0){
    a[i] = k;
    k++;
   }
}
       
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
   
}
int main(){

int t; cin>>t;
while(t--){
    solve();
}

    return 0;
}