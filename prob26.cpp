#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k=0;
	for(int i=1;i<1000;i++)
	{
		int n=1;
		for(int j=2;j<1000;j++)
		{
			n*=10;
			n+=1;
			n%=i;
			if(n==0)
			{
				cout<<j;
				k=max(k,j);
				break;
			}
		}
		cout<<endl;
	}
	cout<<k;
}
