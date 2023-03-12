#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string a, b, x[3] = {"G", "B", "R"};
	int c, d, e;
	cin>>a>>b;
	    
	for (int i=0; i<3; i++) {
	    if (a==x[i]) c = i;
	    if (b==x[i]) d = i;
	}
	    
	e = max(c, d);
	for (int j=0; j<3; j++) {
	    if (e==j) cout<< x[j] ;
	}
	cout<<endl;
	
	return 0;
}
