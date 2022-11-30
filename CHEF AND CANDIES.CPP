#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b)
	    {
	        float d,e;
	        e=a-b;
	        d=ceil(e/4);
	        cout<<d<<endl;
	    }
	    else cout<<"0"<<endl;
	}
	return 0;
}
