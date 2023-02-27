#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++){
	    int x, y, k;
	    cin>>x>>y>>k;
	    
	    cout<< ceil(abs(x-y)/float(k)) <<endl;
	}
	return 0;
}
