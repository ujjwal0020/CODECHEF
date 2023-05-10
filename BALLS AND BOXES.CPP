#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c=0;
	    cin>>a>>b;
	    while(b>0)
	    {
	        c+=b;
	        b--;
	    }
	    if(a>=c)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
