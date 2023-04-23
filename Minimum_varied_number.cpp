#include<bits/stdc++.h>
using namespace std;
void solve(){
    int s;  cin>>s;
    string st="";
  if(s<=9){
    cout<<s<<endl;
    return;
  }
if(s>9){
    s-=9;
    st+='9';
}
if(s>=8)
{
    s-=8;
    st+='8';
}
if(s>=7)
{
    s-=7;
    st+='7';
}
if(s>=6)
{
    s-=6;
    st+='6';

}
if(s>=5)
{
    s-=5;
    st+='5';
}
if(s>=4)
{
    s-=4;
    st+='4';
}
if(s>=3)
{
    s-=3;
    st+='3';
}
if(s>=2)
{
    s-=2;
    st+='2';
}
if(s>=1)
{
    s-=1;
    st+='1';
}
reverse(st.begin(),st.end());
cout<<st<<endl;
}
int main(){

int t;  cin>>t;
while(t--){
    solve();
}
    return 0;
}