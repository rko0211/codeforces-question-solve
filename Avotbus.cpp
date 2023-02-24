#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll m = n/2;
    if(n<=3 || n&1==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll maxi = m/2;
        ll mini ;
        if(m%3==0)
        {
            mini = m/3;
        }
        else if(m%3==1 || m%3==2)
        {
            mini = m/3+1;
        }
        cout<<mini<<" "<<maxi<<endl;
    }
}

    return 0;
}