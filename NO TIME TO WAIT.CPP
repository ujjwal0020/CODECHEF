#include <iostream>
using namespace std;

int main() {
	int n, h , x;
	cin>>n >> h >> x;
	int t[n];
	bool isPossible = false;
	for(int i=0; i<n; i++){
	    cin>>t[i];
	    if((x+t[i]) >= h ) isPossible = true;
	}
	
	isPossible ? cout<<"YES" : cout<<"NO";
	return 0;
}
