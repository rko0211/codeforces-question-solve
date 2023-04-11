#include<bits/stdc++.h>
using namespace std;
void solve(){
    int d,coup;  cin>>d>>coup;
    int a,b,c;  cin>>a>>b>>c;
    int x,y,z;  cin>>x>>y>>z;
    int sum1 = (a+b+c);
    int sum2 = (x+y+z);
int total1 = sum1+sum2+d+d;
int total2 = sum1+sum2;
if(sum1>=150){
    total2+=coup;
}
if(sum1<150){
    total2+=d;
}
if(sum2>=150 && sum1<150){
    total2+=coup;
}
if(sum2<150){
    total2+=d;
}
if(total1>total2){
    cout<<"YES\n";
}
else{
    cout<<"NO\n";
}

}
int main(){

int t;  cin>>t;
while (t--)
{
    /* code */
    solve();
}

    return 0;
}