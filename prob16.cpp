#include<iostream>
using namespace std;
long long int a[100000000];
int main()
{
	long long int n;
	cin>>n;a[0]=n*n;
	long long int b=0;
	long long int x=0,y=0;
	for(int i=0;i<1000000;i++)
	{
		y=n*a[i]+x;
		x=y/10;
		a[i]=y%10;
	}
	long long int count=0;long long int i=1000000;
	while(a[i]==0)
	{
		count++;
		i--;
	}
	for(int j=i;j>=0;j--)
	cout<<a[j];
}
/*if(a[0]==9&&a[2]==8&&a[4]==7&&a[6]==6&&a[8]==5&&a[10]==4&&a[12]==3&&a[14]==2&&a[16]==1)*/
