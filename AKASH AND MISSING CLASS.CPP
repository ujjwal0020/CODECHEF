#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    
	    cout<< (n/7) + (n%7==6 ? 1 : 0) <<endl;
	    // cout<< (n%7==6 ? n/7 +1 : n/7) <<endl;
	}
	return 0;
}
