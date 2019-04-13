#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=0;
	for(int j=0;j<7;j++)
	{
	long long 	int n;
	cin>>n;
long long 	int a=9,b=0,i=0;
	while(n>b)
	{
		b=b+9*pow(10,i)*(i+1);
		i++;
	}
	i--;
	b=b-9*pow(10,i)*(i+1);
	n=n-b;
	i++;
	a=n%i;
	b=n/i;
	if(i>1)
	b=9*pow(10,i-2)+b;
	while(a--)
	b=b/10;
	k=k+b%10;
	cout<<b%10<< " ";
	}
	cout<<k;
}
