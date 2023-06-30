#include<bits/stdc++.h>
using namespace std;
int main()
{

long long int  n;
cin>>n;
cout<<n<<" ";
while(n>1)
{
    if(n%2==1)
    {
        n = 3*1LL*n+1;
        cout<<n<<" ";
    }
    else
    {
        n/=2;
        cout<<n<<" ";
    }
}


    return 0;
}