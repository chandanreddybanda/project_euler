#include<iostream>
using namespace std;
int main()
{
	long long int n=1;
	for(int i=1;i<=1000;i++)
	{
		n=(2*n)%500500507;
	}
	for(int i=1;i<500;i++)
	n=(n*3)%500500507;
	cout<<n;
}
