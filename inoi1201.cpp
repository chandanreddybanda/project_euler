#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][3];int x=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];
		x=x+a[i][0];
	}
	int z=999999;
	for(int i=0;i<n;i++)
	{
		int y=0;
		y=x+a[i][1]+a[i][2];
		if(z>y)
		z=y;
	}
	cout<<z;
}
