#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
                   if(a[i]!=a[0]){
                    count=count+1;
                }
            
        }
        cout<<count<<endl;
       
    }
	return 0;
}
