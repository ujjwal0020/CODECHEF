#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){	
	    int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	int half=s.length()/2;
    	string temp=s;
    	string ans1,ans2,final_ans;
    	for(int i=0;i<half;i++){
    		ans1=ans1+s[i];
    	}
    	for(int i=half;i<s.length();i++){
    		ans2=ans2+s[i];
    	}
    	final_ans=ans2+ans1;
    	if(temp==final_ans){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    	    
	}
	return 0;
}
