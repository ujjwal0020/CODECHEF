#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        int budget = r*1000;
        int technix = budget/2;
        cout<<(budget-technix)/5<<endl;
    }
    return 0;
}
