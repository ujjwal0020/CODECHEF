#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
    int t; 
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        if(n%2==0) 
        {
            string seq,s1;
            cin>>seq;
            for(int i=0; i<seq.length()-1;i+=2)
            {
                char c1=seq[i];
                char c2=seq[i+1];
                if(c1=='0' && c2=='0')
                s1=s1+'A';
                if(c1=='0' && c2=='1')
                s1=s1+'T';
                if(c1=='1' && c2=='0')
                s1=s1+'C';
                if(c1=='1' && c2=='1')
                s1=s1+'G';
            }
            cout << s1 << endl;
        }
        
    }
	return 0;
}
