#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a, b;
    if (n < 4)
    {
        cout << "-1"<<endl;;
        return 0;
    }
    bool flag =false;
    for (b = n / 7; b >= 0; b--)
    { int p =(n - b * 7);
        if (p % 4 == 0)
        {
            flag=true;
            for (int i = 1; i <= p/4; i++)
            {
                cout << 4;
            }
            for (int i = 1; i <= b; i++)
            {
                cout << 7;
            }
            break;
        }
    }
    if (!flag)
        cout << -1<<endl;
   
   
    return 0;
}