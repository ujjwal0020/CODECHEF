#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int T,A,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>A>>B;
	    int C=100-(100*A)/100;
	    int D=200-(200*B)/100;
	    if(C>D)
	    cout<<"SECOND"<<endl;
	    else if(C<D)
	    cout<<" FIRST"<<endl;
	    else
	    cout<<"BOTH"<<endl;
	}
	return 0;
}
