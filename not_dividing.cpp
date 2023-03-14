#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    int n;   cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
 if( a[0]==1) a[0]++;
    for(int i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            a[i]++;
        }
        if(a[i]%a[i-1]==0)
        {
            while (a[i]%a[i-1]==0)
            {
                /* code */
                a[i]++;
            }
            
        
            
        }
        
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    cout<<endl;

}
int main()
{

int t;
cin>>t;
while(t--)
{
    solve();
}

    return 0;
}