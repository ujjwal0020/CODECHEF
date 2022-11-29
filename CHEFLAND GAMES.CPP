#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==0&&b==0&&c==0&&d==0) cout<<"in"<<endl;
    else cout<<"out"<<endl;
}
	return 0;
}
