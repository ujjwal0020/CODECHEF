#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    if(100>(a*0.1)){
            cout<<"100"<<endl;
        }
        else{
            cout<<(a*0.1)<<endl;
        }
	   
	}
	return 0;
}
