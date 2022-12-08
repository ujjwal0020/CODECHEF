#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int d;
	    d=a/b;
	    if(a<b) cout<<"0"<<endl;
	    else cout<<d<<endl;
	}
	return 0;
}
