#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int e,f;
	    e=max(a,b);
	    f=max(c,d);
	    int g=e+f;
	    cout<<g<<endl;
	}
	return 0;
}
