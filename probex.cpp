#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int f=1;
	for(int i=9;i<10000;i++)
	{
		if(prime(i)==0&&i%2!=0)
		{
			for(int j=1;j<=sqrt(i/2);j++)
			{
				if(prime(i-2*(j*j))==1)
				{
					f=0;
					break;
				}
			}
			if(f==1)
			cout<<i<<" ";
		}
		f=1;
	}
}
