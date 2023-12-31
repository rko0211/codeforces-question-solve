#include<bits/stdc++.h>
using namespace std ;
int main(){

int t; cin>>t;
while (t--)
{
    /* code */
    int n,k; cin>>n>>k;
    long long int ans = 1;
    for(int i=0;i<n;i++){
     int x; cin>>x;
     ans*=x;
    }
    if(2023%ans==0){
        cout<<"YES\n";
        cout<<(2023/ans)<<" ";
        k--;
        while(k--){
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO\n";
    }
}


    return 0;
}