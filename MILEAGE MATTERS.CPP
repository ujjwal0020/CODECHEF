#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    float n,x,y,a,b;
	    cin>>n>>x>>y>>a>>b;
	    if((x/a)<(y/b))
	  cout<<"petrol"<<endl;
	     else if((x/a)>(y/b))
	  cout<<"diesel"<<endl;
	     else
	  cout<<"any"<<endl;
	    
	}
	return 0;
}
