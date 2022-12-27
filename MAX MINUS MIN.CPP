#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int mn = min(min(a,b),c);
       int mx = max(max(a,b),c);
        cout << mx - mn << endl;
	}
	return 0;
}
