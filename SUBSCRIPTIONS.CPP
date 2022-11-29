#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    float a;
	    int b;
	    cin>>a>>b;
	    float c;
	    c=a/6;
	    int d;
	    d=ceil(c);
	    int e;
	    e=d*b;
	    cout<<e<<endl;
	}
	return 0;
}
