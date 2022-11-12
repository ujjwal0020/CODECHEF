#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int x,y,z,a,b,c,s;
	for(int i=0;i<t;i++)
	{
	    cin>>x>>y>>z;
	    a=x*4;
	    b=y*2;
	    c=z*0;
	    s=a+b+c;
	    cout<<s<<endl;
	}
	return 0;
}
