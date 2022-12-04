#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    if (x> (a+(b*2)))
	    cout<<"notqualify" <<"\n";
	    else if(x< (a+(b*2)) || x==(a+(b*2)))
	    cout<<"qualify"<<"\n";
	}
	return 0;
}
