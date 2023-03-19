#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int zero_cnt = 0;
    int nonzero_cnt = 0;
     int one_cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zero_cnt++;
        }
        else
        {
             nonzero_cnt++;
             if(a[i]==1)
             {
                one_cnt++;
             }
  
        }
    }
    if(zero_cnt==n)
    {
        cout<<"1\n";
        return;
    }
    else if((zero_cnt-nonzero_cnt)<=1)
    {
        cout<<"0\n";
        return;
    }
    else if(zero_cnt==0)
    {
        cout<<"0\n";
        return;
    }
    else {
        // zero_cnt>nonzero_cnt+1;

        if(nonzero_cnt==one_cnt)
        {
            cout<<"2\n";
            return;
        }
        else
        {
            cout<<"1\n";
            return;
        }

    }

}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}