#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int d,e;
	    d=a*3;
	    e=b*2;
	    if(d>e) cout<<e<<endl;
	    else if(e>d) cout<<d<<endl;
	    else cout<<d<<endl;
	}
	return 0;
}
