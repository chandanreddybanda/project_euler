#include<bits/stdc++.h>
using namespace std;
typedef struct bt
{
	int tag;
	int x;
	int *a;
}*data;	data b[301];
int comp(int a[],int b[],int m,int n)
{
	int count=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			count++;
		}
	}
	return count;
}
void rec(int j,int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(comp(b[j]->a,b[i]->a,b[j]->x,b[i]->x)>=k&&b[i]->tag==0&&i!=j)
		{
			b[i]->tag=1;
			rec(i,n,k);
		}
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=new bt;b[i]->tag=0;
		cin>>b[i]->x;
		b[i]->a=new int[b[i]->x];
		for(int j=0;j<b[i]->x;j++)
		{
			cin>>b[i]->a[j];
		}
	}
	b[0]->tag=1;
	rec(0,n,k);
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(b[i]->tag==0)
		{
			c++;
		}
	}
	cout<<n-c;
}
