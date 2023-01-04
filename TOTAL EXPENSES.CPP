#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
	    int q,p;
	    cin >> q >> p;
	    if(q>1000)
	    cout << fixed << setprecision(6) << (p*q) *.9 << endl;
	    else 
	    cout << fixed << setprecision(6) << q*p*1.0 << endl;
	}
	
	return 0;
}
