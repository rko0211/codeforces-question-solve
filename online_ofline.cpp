#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
	while(t--){
	    int n,m;  cin>>n>>m;
	    double price = 0.9*n*1.0;
        double m1 = m*1.0;
	    if(price<m1){
	        cout<<"ONLINE\n";
	    }
	    else if(price>m1){
	        cout<<"DINING\n";
	    }
	    else if(price==m1){
	        cout<<"EITHER\n";
	    }
	}
	return 0;
}
