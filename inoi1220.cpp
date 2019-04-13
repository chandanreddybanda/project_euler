#include<iostream>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	long long int k=0;
	for(long long int i=0;i<n;i++)
	{
		long long int c=-9999999;
		for(long long int j=0;j<n;j++)
		{
			if(c<((k+j)%(n))+a[j]+1)
			c=((k+j)%(n))+a[j]+1;
		}
		cout<<c<<" ";
		k=k+1;
	}
}
