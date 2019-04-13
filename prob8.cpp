#include<iostream>
using namespace std;
int main()
{
	char c[1000];
	for(int i=0;i<1000;i++)
	cin>>c[i];
	long long int b=0;
	for(int i=0;i<1000;i++)
	{
		long long int a=1;
		for(int j=i;j<i+13&&j<1000;j++)
		a=a*(int(c[j])-48);
		if(b<a)
		b=a;
	}
	cout<<b<<" ";
}
