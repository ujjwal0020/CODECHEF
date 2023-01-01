#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int x;
	    cin>>x;
	    if(x>=1&&x<100) cout<<"easy"<<endl;
	    else if(x>=100&&x<200) cout<<"medium"<<endl;
	    else cout<<"hard"<<endl;
	}
	return 0;
}
