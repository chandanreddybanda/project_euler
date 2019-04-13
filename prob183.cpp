#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int n)
{
	int x=ceil(double(n)/2.71828182846),y=floor(double(n)/2.71828182846);
	if(pow(double(n)/x,x)>pow(double(n)/y,y))
	{
		if(x%2==0)
		return -n;
		else
		return n;
	}
	else
	{
		if(y%2==0)
		return -n;
		else
		return n;
	}
}
int main()
{
	long int q;
	cin>>q;
	for(long int i=0;i<q;i++)
	{
		long long int n;
		cin>>n;
		long long int c=0;
		for(long long int j=5;j<=n;j++)
		{
			c=c+fun(j);
		//	cout<<c<<" ";
		}
		cout<<c<<endl;
	}
}
