#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, a, q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    if (n == a)
    {
        cout << "YES\n";
        return;
    }
    int initial1 = a;
    int initial2 = a;

    int mcnt =0;
    for(int i=0;i<s.size();i++){
      if(s[i]=='-'){
       mcnt++;
      }
      else{
        if(mcnt>0){
            initial1++;
            mcnt--;
        }
        else{
            initial1++;
            initial2++;
        }
      }
    }
    // cout<<initial1<<" "<<initial2<<endl;
      if(initial1>=n && initial2>=n){
        cout<<"YES\n";
        return;
    }
    if((initial1>=n && initial2<n) || (initial1<n && initial2>=n)){
        cout<<"MAYBE\n";
        return;
    }
  
    else{
        cout<<"NO\n";
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