#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string u,d;
    cin>>u>>d;
    int sum1=0;
    for(int i=0;i<u.size();i++)
    {
        if(u[i]=='1')
        {
            sum1+=1;
        }
        else if(u[i]=='3')
        {
            sum1+=4;
        }
        else if(u[i]=='5')
        {
            sum1+=6;
        }
        else if(u[i]=='7')
        {
            sum1+=9;
        }
    }
    int sum2=0;
        for(int i=0;i<d.size();i++)
    {
        if(d[i]=='1')
        {
            sum2-=1;
        }
        else if(d[i]=='3')
        {
            sum2-=4;
        }
        else if(d[i]=='5')
        {
            sum2-=6;
        }
        else if(d[i]=='7')
        {
            sum2-=9;
        }
    }
    cout<<(sum1+sum2)<<endl;


}
int main()
{

int t;  cin>>t;
while(t--)
{
    solve();
}
    return 0;
}