#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0
#define ll long long int 
void solve() 
{
string s ; cin>>s;
int frontsum=0;
int backsum=0;
for(int I=0;I<3;I ++) 
{
 frontsum += (s[I]-'0') ;
 backsum+= (s[6-I-1] -'0') ;
}
 if(frontsum == backsum) 
cout<<"YES"<<endl;

else
cout<<"NO"<<endl;

}
int main()
{
int t; cin>>t;
while (t--) 
{
  solve() ;
}
  return 0;
   
}