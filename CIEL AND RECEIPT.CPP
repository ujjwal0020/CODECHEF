#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, copy, cnt = 0;
		cin>>x;
		copy = x;
		while(copy > 0)
		{
			cnt++;
			if(copy >= 2048)
			{
				copy -= 2048;
			}
			else if(copy >= 1024)
			{
				copy -= 1024;
			}
			else if(copy >= 512)
			{
				copy -= 512;
			}
			else if(copy >= 256)
			{
				copy -= 256;
			}
			else if(copy >= 128)
			{
				copy -= 128;
			}
			else if(copy >= 64)
			{
				copy -= 64;
			}
			else if(copy >= 32)
			{
				copy -= 32;
			}
			else if(copy >= 16)
			{
				copy -= 16;
			}
			else if(copy >= 8)
			{
				copy -= 8;
			}
			else if(copy >= 4)
			{
				copy -= 4;
			}
			else if(copy >= 2)
			{
				copy -= 2;
			}
			else if(copy >= 1)
			{
				copy -= 1;
			}
		}
		cout<<cnt<<endl;
	}
}
