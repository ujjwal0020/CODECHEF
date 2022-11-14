#include <iostream>
using namespace std;

int main() {
	int t,s;
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b;
	    if(a>b)
	    {
	      s=a-b;
	      cout<<s<<endl;
	    }
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
