#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        /*
        let h = n/7
        for all n > 7, n = 7*(h-1) + 2*y
                                h,y => integers
        */
        if((n%7)%2 != 0 && n<7){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
	return 0;
}
