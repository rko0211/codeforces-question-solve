#include<bits/stdc++.h>
using namespace std;
void solve(){
        int n; cin >> n;
        vector<int> v(n);
        int pcnt = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]==1)pcnt++;
        }
        int ncnt = n - pcnt;
        int diff = (pcnt>=ncnt)?0:abs(pcnt-ncnt-1)/2;
        int extra = (ncnt+diff)%2;
        cout << diff + extra << endl;

    }
 

int main(){

int t;  cin>>t;
while (t--)
{
    solve();
    /* code */
}


    return 0;
}