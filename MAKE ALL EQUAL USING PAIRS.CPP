#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        
       int p=1, q=1, i=0, j=1;
        while(j<n){
            if(a[i]==a[j]){p++; 
                            if(p>=q) q=p;}
            
            else{
            p=1;
            }
           i++;
           j++;
        }
        cout<<(n-q)<<endl;
       
        
    }
	return 0;
}
