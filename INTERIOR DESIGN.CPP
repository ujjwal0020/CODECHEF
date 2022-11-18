#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d;
	    e=a+b;
	    f=c+d;
	    if(e>f) cout<<f<<endl;
	    else if(f>e) cout<<e<<endl;
	      else cout<<e<<endl;
	}
	return 0;
}
