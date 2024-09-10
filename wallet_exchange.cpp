#include<bits/stdc++.h>
using namespace std ;
#define ll long long int 
int main(){
int t; cin>>t;
while(t--){
ll a,b;
cin>>a>>b;
if((a+b)%2==0){
    cout<<"Bob\n";
}
else{
    cout<<"Alice\n";
}
}
    return 0;
}