#include<bits/stdc++.h>
using namespace std;
long long int fun(long long int a,long long int n,long long int m)
{
	if(n==1)
	return a;
	else
	{
		long long int k=(pow(a,fun(a,n-1,m)%m));
		return k;
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int a,n,m;
		cin>>a>>n>>m;
		cout<<fun(a,n,m)<<endl;
	}
}
