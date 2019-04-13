#include<iostream>
using namespace std;
int main()
{
	int f=0;
	for(int i=1;i<=1000;i++)
	{
		for(int j=i;j<=1000;j++)
		{
			for(int k=j;k<=1000;k++)
			{
				if(i*i+j*j==k*k&&i+j+k==1000)
				{
					f=1;
					cout<<i<<" "<<j<<" "<<k;
					break;
				}
			}
			if(f==1)
			break;
		}
		if(f==1)
		break;
	}
}
