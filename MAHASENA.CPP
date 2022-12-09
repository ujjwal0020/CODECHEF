#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	int cnt=0;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    
	    if(arr[i]%2==0){
	        count++;
	    }
	    else{
	        cnt++;
	    }
	}
	if(count>cnt){
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else{
	    cout<<"NOT READY"<<endl;
	}
	
	
	return 0;
}
