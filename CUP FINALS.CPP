#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y,d,n=0;
	    cin >> x >> y >> d;
	   x>y ? n = x-y : n = y-x;
	    if(n > d){
	        cout << "No" << endl;
	    }else{
	        cout << "Yes" << endl;
	    }
	}
	return 0;
}
