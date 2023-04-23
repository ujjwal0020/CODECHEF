#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    bool flag=false;
	    for(int i=0;i<str.size()-2;i++){
	        if((str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
	        &&
	        (str[i+1]=='a' ||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u')
	        &&
	        (str[i+2]=='a' ||str[i+2]=='e'||str[i+2]=='i'||str[i+2]=='o'||str[i+2]=='u')){
	            flag=true;}
	        
	       
	    }
	     if(flag==0){
	            cout<<"sad"<<endl;
	        }
	        else{
	            cout<<"happy"<<endl;
	        }
	}
	return 0;
}
