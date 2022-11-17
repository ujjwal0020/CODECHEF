#include <iostream>
using namespace std;

int main() {
int t,x;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>x;
    if(x>=300){
        int d;
        d=x*10;
        cout<<d<<endl;
    }
    else cout<<"3000"<<endl;
}
	return 0;
}
