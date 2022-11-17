#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b) cout<<"second"<<endl;
	    else if(b>a) cout<<"first"<<endl;
	    else cout<<"any"<<endl;
	}
	return 0;
}
