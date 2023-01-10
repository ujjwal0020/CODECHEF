#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int n=a+b;
        int m=b+c;
        int o=a+c;
        int mm=max(n,max(m,o));
        cout<<mm<<endl;
    }
	// your code goes here
	return 0;
}
