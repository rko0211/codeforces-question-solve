#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
  sort(a,a+n);
    int max1 =INT_MIN;
    int max2 =INT_MIN+1;

    for(int i=0;i<n;i++)
    {
        if(a[i]>=max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1)
        {
            max2 =a[i];
        }
    }
    

    for(int i=0;i<n;i++)
    {
        if(b[i]==max1)
        {
            b[i] = (b[i]-max2);
        }
        else{
            b[i] = b[i]-max1;
        }
    }
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{

int t;
cin>>t;
while(t--)
solve();
    return 0;
}