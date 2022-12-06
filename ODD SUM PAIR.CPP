#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	      
	    int x=a+b;
	    int y=a+c;
	    int z=b+c;
	    
	    if(x%2!=0||y%2!=0||z%2!=0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
