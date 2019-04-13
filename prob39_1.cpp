#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int p=1;p<1001;p++)
	{
		for(int i=0;i<1000;i++)
		{
			for(int j=1;j<1000;j++)
			{
				int q=i+j,r=i*i+j*j;
				if((q-sqrt(r)==p||q+sqrt(r)==p)&&(sqrt(r)>j&&sqrt(r)<i)&&(i+j+sqrt(r)==p))
				{
					cout<<i<<" "<<sqrt(r)<<" "<<j<<" ";
				}
			}
		}
	}
}
