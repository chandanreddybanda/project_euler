#include<iostream>
using namespace std;
int main()
{
	int k=3,l=2,z=0,c=0;
	do
	{
		c++;
		if(c==4)
		{
			l=l+2;
			c=0;
		}
		z=z+k;
		k=k+l;
	}while(l<1001);
	cout<<z+1;
}
