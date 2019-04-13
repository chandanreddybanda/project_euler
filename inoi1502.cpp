#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>>n>>m;
	for(int i=n/2;i>0;i--)
	{
		if(n%i==0)
		{
			count=count+pow(2,i);
		}
	}
	int v=(pow(2,n)-count);
	cout<<v%m;
}
