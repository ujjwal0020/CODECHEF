#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>d;
	    c=b/a;
	    if(c<d)
	    {
	        int e;
	        e=d-c;
	        cout<<e<<endl;
	    }
	    else cout<<"0"<<endl;
	    
	}
	return 0;
}
