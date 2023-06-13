#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ; cin>>n;
   if(n<=3){
    cout<<"Bob\n";
    return;
   }
    if(n%2==1 && n>3){
    cout<<"Alice\n";
    return;
   }
   if(n%2==0 && n==4){
    cout<<"Bob\n";
    return;
   }
   if(n%2==0 && n>4){
    cout<<"Alice\n";
    return;
   }
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}



    return 0;
}