#include<iostream>
using namespace std;
int main()
{
	int a[20][20];
	for(int i=0;i<20;i++)
	for(int j=0;j<20;j++)
	cin>>a[i][j];
	long long int b=-1;
	for(int j=0;j<20;j++)
	for(int i=0;i<17;i++)
	{
		long int x=1;
		for(int k=i;k<i+4;k++)
		x=x*a[j][k];
		if(b<x)
		b=x;
	}
	cout<<b<<" ";
	for(int j=0;j<20;j++)
	for(int i=0;i<17;i++)
	{
		long int x=1;
		for(int k=i;k<i+4;k++)
		x=x*a[k][j];
		if(b<x)
		b=x;
	}
	cout<<b<<" ";
	for(int j=0;j<17;j++)
	for(int i=0;i<17;i++)
	{
		long int x=1;
		for(int k=0;k<4;k++)
		x=x*a[i+k][j+k];
		if(b<x)
		b=x;
	}
	cout<<b;	
}	
//48477312
//51267216
