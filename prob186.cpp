#include<iostream>
using namespace std;
long int fun(long int k)
{
	if(k<=55&&k>=1)
	return (100003-200003*k+300007*k*k*k)%1000000;
	else
	return (fun(k-24)%1000000+fun(k-55)%1000000)%1000000;
}
int main()
{
	long int n,p;
	cin>>n>>p;
//	for(long int i=1;i<(p*10000);i++)
	{
		//if(fun(i)==n)
		cout<<" "<<fun(5000)<<" ";
	}
}
