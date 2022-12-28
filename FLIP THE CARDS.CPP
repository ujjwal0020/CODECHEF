#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,y;
    cin>>n>>y;
    int x = n-y;
    if(x<y) cout<<x<<endl;
    else cout<<y<<endl;
}

int main()
{
    int test;
    cin>>test;
    while(test--) solve();
    return 0;
}
