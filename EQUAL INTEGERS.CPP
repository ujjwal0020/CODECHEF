#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    long long a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a<=b)
            cout<<b-a<<endl;
        else
        {
            if((a-b)%2==0)
                cout<<(a-b)/2<<endl;
            else
                cout<<(a-b)/2 +2<<endl;
        }
    }
	return 0;
}
