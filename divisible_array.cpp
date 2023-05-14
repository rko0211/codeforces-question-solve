#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; cin>>n;

    if(n%2==1){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
     int i =2;
     for(int j =1;j<=n;j++){
        cout<<i<<" ";
        i+=2;
     }
cout<<endl;
    }

   

}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}


    return 0;
}