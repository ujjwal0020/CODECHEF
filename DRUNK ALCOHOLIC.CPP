#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int k;
	    cin>>k;
	    
	    cout<< ((k/2)*2 + (k%2)*3) <<endl;
	}
	return 0;
}
