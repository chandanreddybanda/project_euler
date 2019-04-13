#include<bits/stdc++.h>
using namespace std;
int check(long long int n)
{
	long long int x=2,y=0;int count =0,m=1;
	while(n>1&&x<1000)
	{
		if(n%x==0)
		{
			cout<<x<<" ";
			y=x;
			n=n/x;
			count++;
		}
		else
		{
			
			x++;
			if(count!=0)
			{
				m=m*(count+1);
				count=0;
			}
		}
	}
	if(count!=0)
	m=m*(count+1);
	//return x;
}
int main()
{
	long long	int n=9;
	for(int i=1;i<100;i++)
{
		n*=10;
		n+=9;
	check(n);
	cout<<endl;
}
//	while(check(n*(n+1)/2)<500)
	{
//		n++;
	}
//	cout<<(n*(n+1)/2);
}
