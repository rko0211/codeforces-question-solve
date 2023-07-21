#include <bits/stdc++.h>
using namespace std;
void solve()
{
   char v[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> v[i][j];
        }
    }
    int row =-1,col=-1;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(v[i][j]!='.'){
                col = j;
                row = i;
                break;
            }
        }
        if(row!=-1 && col!=-1){
            break;
        }
    }
    string ans ="";
    for(int i = row;i<8;i++){
        if(v[i][col]>='a' && v[i][col]<='z'){
            ans+=v[i][col];
        }
    }
    cout<<ans<<endl;
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