#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    int c,d;
	    cin>>a>>b;
	    cin>>c>>d;
	    if(c<a || d<b)
	    {
	        cout<<"IMPOSSIBLE"<<endl;
	    }
	    else if(c>=a || d>=b)
	    {
	        cout<<"POSSIBLE"<< endl;
	    }
	}
	return 0;
}
