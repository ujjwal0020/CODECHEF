#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b;
    cin>>a>>b;
    int c;
    c=a/b;
    if(c%2==0 &&a%b==0)cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
	return 0;
}
