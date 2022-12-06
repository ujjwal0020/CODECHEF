#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
     int sum;
     int n;
     for(int i=0;i<t;i++)
     {
         sum=0;
	    cin>>n;
	    while(n!=0)
	    {
	        sum+=n%10;
	        n=n/10;
	    }
	    cout<<sum<<endl;
     }
	return 0;
}
