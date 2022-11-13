#include<iostream>
using namespace std;
int main()
{
    int t,n,r,re;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        re=0;
       cin>>n;
       while(n!=0)
       {
           r= n % 10;
    re = re*10+r;
    n /= 10;
       }
       cout<<re<<endl;
    }
}
