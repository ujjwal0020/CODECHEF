#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    
    while(t--){
        cin>>n;
        int total=0;
        for(int i=5;i<=n;i*=5){
            total+=n/i;
        }
        cout<<total<<endl;
        
    }
	return 0;
}
