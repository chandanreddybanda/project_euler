#include<iostream>
using namespace std;
int check(int a,int b)
{
	if(a!=3&&b!=3)
	{
		cout<<a<<" "<<b<<" ";
		check(a+1,b);
		check(a,b+1);	
	}
	if(a!=3&&b==3)
	{
		cout<<a<<" "<<b<<" ";
		check(a+1,b);
	}
	else if(b!=3&&a==3)
	{
		cout<<a<<" "<<b<<" ";
		check(a,b+1);	
	}  
	else
	cout<<a<<" "<<b<<" "<<endl;
}
int main()
{
	check(0,0);
}
