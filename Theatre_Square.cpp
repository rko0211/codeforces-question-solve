#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

ll n,m,a;
ll row,col;
cin>>n>>m>>a;
if(n%a==0){
row = n/a;
}
else{
    row = n/a +1;
}
if(m%a==0){
    col = m/a;
}
else{
    col = m/a +1;
}
cout<<(row*col)<<endl;
    return 0;
}