#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
	    int j,c_1=0,c_2=0;
	    cin>>j;
	    //created a array type string
	    string arr[j];
	    for(int k=0;k<j;k++){
	        cin>>arr[k];
	    }
	    for(int k=0;k<j;k++){
	        if(arr[k]=="START38"){
	            c_1++;
	        }
	        else{
	            c_2++;
	        }
	    }
	    cout<<c_1<<" "<<c_2<<"\n";
	}
	return 0;
}
