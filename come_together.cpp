#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    // Mid position
    ll ans =1;
    // if((x1>x2 && (x1<x3)) || (x1<x2)&&(x1>x3)){

    //      if((y1>y2 && y1>y3) || (y1<y2 && y1<y3)){
    //         ans+=min(abs(y1-y2),abs(y1-y3));
    //         cout<<ans<<endl;
    //      }
    //      else{
    //         cout<<ans<<endl;
    //      }
    //     return;
    // }
    // else if((x1<x2 && x1<x3)){
    //     if((y1>y2 && y1<y3) || (y1<y2 && y1>y3)){
    //      ans+= abs(x1-min(x2,x3));
    //      cout<<ans<<endl;
    //     }
    //     else{
    //         // y on same side
    //         ans+= abs(x1-min(x2,x3)) + min(abs(y1-y2),abs(y1-y3));
    //         cout<<ans<<endl; 
    //     }
    // }
    // else if(x1>x2 && x1>x3){
    //     if((y1>y2 && y1<y3) || (y1<y2 && y1>y3)){
    //      ans+= abs(x1-max(x2,x3));
    //      cout<<ans<<endl;
    //     }
    //     else{
    //         // y on same side
    //         ans+= abs(x1-max(x2,x3)) +min(abs(y1-y2),abs(y1-y3));
    //         cout<<ans<<endl; 
    //     }
    // }
 
  if((x1>x2 && x1>x3) || (x1<x2 && x1<x3)){
    ans+= min(abs(x2-x1),abs(x3-x1));
  }
  if((y2<y1 && y3<y1) || (y1<y2 && y1<y3)){
    ans+= min(abs(y2-y1),abs(y3-y1));
  }
  cout<<ans<<endl;
}
int main(){

int t; cin>>t;
while (t--)
{
    /* code */
    solve();
}


    return 0;
}