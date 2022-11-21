#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a==b && (a&b)>=1) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	return 0;
}
