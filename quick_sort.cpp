#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int p[n];
for(int i=0;i<n;i++)
cin>>p[i];
int w=1;
for(int i=0;i<n;i++)
{
    if(p[i]==w)
    w++;
}
cout<< ((n-w+k)/k)<<endl;
}
    return 0;
}