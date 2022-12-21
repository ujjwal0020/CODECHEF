#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    if(a%10==0)
	    cout<<a/10<<endl;
	    else if(a%5==0)
	    cout<<(a/10)+1<<endl;
	    else cout<<"-1"<<endl;
	}
	return 0;
}
