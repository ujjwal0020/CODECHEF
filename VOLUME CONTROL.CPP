#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b){
	        int d=a-b;
	        cout<<d<<endl;
	    }
	    else {
	        int e;
	        e=b-a;
	        cout<<e<<endl;
	    }
	}
	return 0;
}
