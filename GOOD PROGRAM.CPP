#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    if(a%4==0) cout<<"good"<<endl;
	    else cout<<"not good"<<endl;
	}
	return 0;
}
