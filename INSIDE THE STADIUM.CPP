#include <bits/stdc++.h>
using namespace std;
void call(){
    int n;cin>>n;
    int a[n];
    int prefixSum[n];
    for(int i =0;i<n;i++){
            cin>>a[i];
    }
    prefixSum[0] = a[0];
    for (int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }
    float c =1;
    float k;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        k = (prefixSum[i]/c);
        c++;
        if(k*100==100){
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main()
{
 int t;cin>>t;
 while(t--){
     call();
 }
 return 0;
 
}
