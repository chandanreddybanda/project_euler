#include<iostream>
using namespace std;
int main()
{
	char a[100][50];
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<50;j++)
		cin>>a[i][j];
	}
	long long int c=0,z=0,l=0;long long int k=1;int x[100];
	for(int j=49;j>-1;j--)
	{
		for(int i=0;i<100;i++)
		{
			c=c+int(a[i][j])-48;
		}
		c=c+z;
		x[l++]=c%10;
		z=c/10;
		c=0;
	}
	cout<<z<<" ";
	for(int i=49;i>41;i--)
	cout<<(x[i]);
}

