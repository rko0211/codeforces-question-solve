#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class info{
    public:
    int score,time,idx;
    info(int a,int b, int c){
       score =a;
       time = b;
       idx =c;
    };
};
void solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    int a[n][m];
    vector<info>v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        sort(a[i], a[i]+m);
    }
    for(int i=0;i<n;i++){
    ll score=0;
    ll time =0;
    ll pan =0;
    for(int j=0;j<m;j++){
        if(time+a[i][j]<=h){
            time+=a[i][j];
            pan+=time;
            score++;
        }
    }
    info newitm(score,pan,i);
    v.emplace_back(newitm);
    }
    sort(v.begin(),v.end(),[](info &a, info& b){
        if(a.score==b.score){
            if(a.time==b.time){
                return a.idx<b.idx;
            }
            return a.time<b.time;
        }
        return a.score>b.score;
    });
    for(int i=0;i<n;i++){
        if(v[i].idx==0){
            cout<<(i+1)<<endl;
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