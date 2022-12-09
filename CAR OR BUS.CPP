#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b;
    cin>>a>>b;
    if(b>a) cout<<"bike"<<endl;
    else if(a>b) cout<<"car"<<endl;
    else cout<<"same"<<endl;
}
	return 0;
}
