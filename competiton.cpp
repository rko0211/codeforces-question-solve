#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>>p1, pair<int,pair<int,int>>p2){
    if(p1.second.first>p2.second.first){
        return true;
    }
    else if(p1.second.first==p2.second.first){
        return p1.second.second < p2.second.second;
    }
    return false;

}
void solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        sort(a[i], a[i]+m);
    }

    int p[n][m];

    for(int i=0;i<n;i++){
        p[i][0] = a[i][0];
        for(int j=1;j<m;j++){

            p[i][j]=(a[i][j]+p[i][j-1]);
        }
    }
    vector<pair<int,pair<int,int>>>vp;
    for(int i=0;i<n;i++){
        long long pan =0;
        int win=0;
        long long curr=0;
        for(int j=0;j<m;j++){
           if(curr+p[i][j]<=h){
           pan+=p[i][j];
            win++;
           }
     
        }
        vp.push_back({i,{win,pan}});
    }
    sort(vp.begin(),vp.end(),cmp);
    // for(int i=0;i<vp.size();i++){
    //     cout<<vp[i].first<<" "<<vp[i].second.first<<" "<<vp[i].second.second<<endl;
    // }
    // cout<<endl;
    for(int i=0;i<vp.size();i++){
        if(vp[i].first==0){
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