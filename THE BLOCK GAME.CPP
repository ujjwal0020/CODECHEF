#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,temp,rem,rev=0;
        cin>>n;
        temp=n;
        while(n!=0){
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
        if(rev==temp)
        cout<<"wins"<<endl;
        else
        cout<<"loses"<<endl;
    }
	return 0;
}
