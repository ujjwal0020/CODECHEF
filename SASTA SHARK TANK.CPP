#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	   cin>>a>>b;
	    c=10*a;
	    d=5*b;
	    if(c>d)
	    {
	        cout<<"first"<<endl;
	    }
	    else if(d==c)
	    {
	        cout<<"any"<<endl;
	    }
	    else
	    {
	        cout<<"second"<<endl;
	    }
	}
	return 0;
}

