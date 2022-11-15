#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a;
	for(int i=0;i<t;i++)
	{
	    cin>>a;
	    int s;
	    s=a*60;
	    int d;
	    d=s/20;
	    cout<<d<<endl;
	}
	return 0;
}
