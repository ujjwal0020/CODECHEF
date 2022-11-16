#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e;
	    cin>>a>>b;
	    if(b>a){
	       c=7-b;
	       cout<<c<<endl;
	    }
	    else if(a>b)
	    {
	        d=7-a;
	        cout<<d<<endl;
	    }
	    else{
	        e=7-a;
	        cout<<e<<endl;
	    }
	}
	return 0;
}
