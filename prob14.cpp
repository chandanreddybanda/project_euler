#include<iostream>
using namespace std;
int main()
{
	long long int n,c=0,x,y=0;
	for(long long int i=1000000;i>0;i--)
	{
		n=i;
		while(n!=1)
		{
			if(n%2==0)
			n=n/2;
			else
			n=3*n+1;
			c++;
		}
		if(y<c)
		{
			y=c;
			x=i;
		}
		c=0;
	}
	cout<<x;
}
