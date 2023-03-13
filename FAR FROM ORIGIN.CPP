#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    
	    int a1,a2,b1,b2;
	    a1=abs(x1);
	    a2=abs(y1);
	    b1=abs(x2);
	    b2=abs(y2);
	    
	   double alex=sqrt((a1*a1)+(a2*a2));
	   double bob=sqrt((b1*b1)+(b2*b2));
	   
	   if(alex==bob)
	     cout<<"EQUAL"<<endl;
	   else if(alex>bob)
	     cout<<"ALEX"<<endl;
	   else if(bob>alex)
	     cout<<"BOB"<<endl;
	   
	    
	}
	return 0;
}
