#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,temp;
	cin>>t;
for(int i=0;i<t;i++)
	{
	    cin>>x;
	    while(x>0)
	    {
	        temp = x%10;
	        x=x/10;
	        if(temp==7)
	        {
	            cout<<"YES"<<endl;
	            break;
	        }
	        else if(x==0)
	        {
	            cout<<"NO"<<endl;
	        }
	        
	    }
	}
	return 0;
}
