#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n ;  cin>>n;
 int a[n];
 if(n==1){
    cout<<1<<endl;
    return;
 }
 if(n==2){
    cout<<2<<" "<<1<<endl;
    return;
 }
 for(int i =0;i<n;i++){
    a[i] = (i+1);
 }
 for(int i=1;i<n-1;i++){
    swap(a[i],a[i+1]);
 }
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
 }
 cout<<endl;
}
int main(){

int t; cin>>t;
while (t--)
{
    /* code */
    solve();

}


    return 0;
}