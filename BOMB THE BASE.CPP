#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int n,x;
	    int no_of_houses=0;
	    cin>>n>>x;
	    vector<int> vect(n);
	    for(int i=0;i<n;i++){
	        cin>>vect[i];   
	    }
	    for(int i=0;i<n;i++){
	        if(vect[i]<x){
	            no_of_houses=i+1;
	        }
	    }
	    cout<<no_of_houses<<endl;
	    t--;
	}
	return 0;
}
