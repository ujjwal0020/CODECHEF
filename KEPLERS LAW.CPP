#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double T1,T2,R1,R2;
        cin>>T1>>T2>>R1>>R2;
        if((T1*T1)/(R1*R1*R1) != (T2*T2)/(R2*R2*R2)){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
