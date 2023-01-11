#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d=a+c;
	    if(d>=b) cout<<d<<endl;
	    else cout<<b<<endl;
	}
	return 0;
}
