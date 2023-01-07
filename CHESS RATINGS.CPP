#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
   cin>>t;
    while (t--)
    {
        cin>>a>>b;
        c = ceil(((float)b - a) / 8);
       cout<<c<<endl;
    }

    return 0;
}
