#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    if(a+b>=x||b+c>=x||a+c>=x)
    cout<<"yes"<<endl;
else cout<<"no"<<endl;
}
	return 0;
}
