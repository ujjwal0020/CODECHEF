#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,s;
	cin >> t;
	while(t--)
	{
	    cin >> s;
	    int x,y;
	    x=s+1;
	    y=s-x;
	    cout << x*y <<endl;
	}
	return 0;
}
