#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	for(int i=0;i<t;i++){
	  int n; 
	  cin>>n; 
	  char s[n]; 
	  cin>>s;
	  for(int i=0;s[i]!='\0';i++){
	      if(s[i]=='A'){
	          s[i]='T';
	      }else if(s[i]=='T'){
	          s[i]='A';
	      }else if(s[i]=='G'){
	          s[i]='C';
	      }else if(s[i]=='C'){
	          s[i]='G';
	      }
	  }
	 cout<<s<<endl;;
	}
	return 0;
}
