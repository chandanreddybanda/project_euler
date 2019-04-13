#include<iostream>
using namespace std;
int prop(int n)
{
	long int count=0;
	for(int i=1;i<n;i++)
	if(n%i==0)
	count=count+i;
	return count;
}
int main()
{
	int count=0;
	for(int i=1;i<=10000;i++)
	{
		if(i==prop(prop(i))&&i!=prop(i))
		{
			count=count+i;
			cout<<i<<" ";
		}
	}
	cout<<count<<" ";
}
