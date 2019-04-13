#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long  x=1,y=1,z=1;
	for(int i=11;i<100;i++)
	{
		for(int j=11;j<100;j++)
		{
			float a=i%10,b=(i/10)%10,c=j%10,d=(j/10)%10;
			if(float(i)/float(j)<1&&i!=j&&a!=0&&c!=0&&((float(i)/float(j)==a/c && b==d) || (float(i)/float(j)==a/d && b==c) || (float(i)/float(j)==b/c && a==d) || (float(i)/float(j)==c/d && a==b)))
			{
				x=x*i;
				y=y*j;
			//	z=z*(float(i)/float(j));
			}
		}
	}
	cout<<x<<" "<<y;
}
