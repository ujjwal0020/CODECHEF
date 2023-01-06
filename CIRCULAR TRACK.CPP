#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,m;
	    cin>>a >>b >>m;
	    int s=abs(a-b);
	    int r=m-s;
	    cout<<min(s,r)<<endl;

	}
	return 0;
}
