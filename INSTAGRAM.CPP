#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	     int x,y;
	    cin>>x>>y;
	    if(x > 10*y)
	      cout<<"Yes"<<endl;
	    else
	      cout<<"No"<<endl;
	}
	return 0;
}
