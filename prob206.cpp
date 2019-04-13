#include<iostream>
using namespace std;
int a[1000000];
int main()
{
	a[0]=5;a[1]=2;
	int n;
	cout<<"Enter the number that you want to find the factorial of -> ";
	cin>>n;
	int b=0;
	int x=0,y=0;
	for(int j=1;j<n+1;j++)
	for(int i=0;i<1000000;i++)
	{
		y=a[i]*a[i]+x;
		x=y/10;
		a[i]=y%10;
	}
	int count=0;int i=1000000;
	while(a[i]==0)
	i--;
	//cout<<i<<" ";
	for(int j=i;j>=0;j--)
	cout<<a[j];
}
