#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d;
	    e=c/a;
	    f=e+d/b;
	    cout<<f<<endl;
	}
	return 0;
}
