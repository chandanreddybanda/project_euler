#include<iostream>
using namespace std;
int main()
{
	int n,k=1,m=1;
	cin>>n;
	for(int i=1;i<=n/2;i++)
	{
		if(i%2!=0)
		m=m*(2*n-i);
		k=k*i;
	}
	m=m*(2*n-(n/2)+1);
	cout<<m/k;
}
