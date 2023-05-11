#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int p,q,r,s;
	    cin >> p >> q >> r >> s;
	    if ( p > (q+r+s) || q > (r+s+p) || r > (s+p+q) || s > (p+q+r)) cout << "yes";
	    else cout << "no";
	    cout << endl;
	}
	return 0;
}
