#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T; cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    bool flag=false;
	    for(int i=0;i<s.size();i=i+2)
	    {
	        
	        if(s[i]=='A')
	        {
	            if(s[i+1]=='A')
	           {
	                flag=true;
	                break;
	                
	           }
	        }
	        else if(s[i]=='B')
	        {
	            if(s[i+1]=='B')
	             {
	                flag=true;
	                break;
	             }
	        }
	    }
	    if(flag)
	    cout<<"no"<<endl;
	    else
	    cout<<"yes"<<endl;
	}
	return 0;
}
