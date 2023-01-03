#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int s;
	    cin>>s;
	    int arr1[s], arr2[s];
	    for(int i = 0; i < s; i++){
	        cin>>arr1[i];
	    }
	    for(int i = 0; i < s; i++){
	        cin>>arr2[i];
	    }
	    int c = 0;
	    for(int i = 0; i < s; i++){
	        if(arr1[i] == arr2[i]){
	            c++;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
