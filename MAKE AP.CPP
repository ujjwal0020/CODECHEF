#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    cin>>a>>c;
	    b=(c+a)/2;
	    if((c-b)==(b-a)){
	        cout<<b<<endl;
	    }
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
