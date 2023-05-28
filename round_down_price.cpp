#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int  m;  cin>>m;
    int count=0;
    long long int res=m;
    while(m>0){
        count++;
        m/=10;
    }
    count--;
    long long int power =1;
    while(count--){
        power*=10;
    }
    cout<<(res - power)<<endl;
}
int main(){


int t;  cin>>t;
while(t--){
    solve();
}
    
    return 0;
}