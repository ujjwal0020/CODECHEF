#include <iostream>
using namespace std;

int main() {
int t,s,m;
cin>>t;
int a,b,x,y;
for(int i=0;i<t;i++)
{
    cin>>a>>b>>x>>y;
    if(b>a)
    {
    s=a+x;
    if(s>=b) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    } 
    else if(a==b)
    cout<<"yes"<<endl;
    else if(b<a)
    {
      m=a-y;
      if(m<=b) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }
}
	return 0;
}
