#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> grid(2, vector<int>(n));
    int temp[2*n];
    for(int i=0;i<(2*n);i++){
        temp[i]= (i+1);
    }
    int j1=0,i1=1;
    int j2=(2*n-2),i2=(2*n-1);
    int x =0;
   while(i1<i2){
    grid[0][x] = temp[i2];
    x++;
    grid[0][x] = temp[i1];
    x++;
    i1+=2;
    i2-=2;
   }
   int y=n-1;
   while(j1<j2){
   
    grid[1][y--] = temp[j2];
     grid[1][y] = temp[j1];
    y--;
    j2-=2;
    j1+=2;
   }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}