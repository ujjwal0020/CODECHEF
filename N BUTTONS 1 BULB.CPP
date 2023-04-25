#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    char s[n];
	    char r[n];
	    for(int i = 0 ; i < n ; i ++)
	    {
	        cin >> s[i];
	    }
	    for(int i = 0 ; i < n ; i ++)
	    {
	        cin >> r[i];
	    }
	    
	    int count = 0;
	    for(int i = 0 ; i < n ; i ++)
	    {
	        if(r[i] != s[i])
	        {
	            count ++;
	        }
	    }

	    if(count % 2 == 0)
	    {
	        cout << 1 << endl;
	    }else
	    {
	        cout << 0 << endl;
	    }
	}
	return 0;
}
