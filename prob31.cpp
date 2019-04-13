#include<iostream>
using namespace std;
int main()
{
	int count=0;
	for(int i=0;i<3;i++)
	{
		for(int a=0;a<5;a++)
		{
			for(int b=0;b<11;b++)
			{
				for(int c=0;c<21;c++)
				{
					for(int d=0;d<41;d++)
					{
						for(int e=0;e<101;e++)
						{
							for(int f=0;f<201;f++)
							{
								if(i*100+a*50+b*20+c*10+d*5+e*2+f==200)
								count++;
							}
						}
					}
				}
			}
		}
	}
	cout<<count;
}
