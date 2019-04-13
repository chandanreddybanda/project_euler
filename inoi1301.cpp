#include<iostream>
using namespace std;
int a[3000],b[3000],l=0;
void com(int k,int m,int n)
{
	if(k==0)
	b[l++]=m;
	//else
//	{
		else if(k==1)
		{
			if(a[k-1]!=0)
			{m=m+a[k-1];int d=a[k-1];a[k-1]=0;
			com(k-1,m,n);a[k-1]=d;m=m-a[k-1];
			}
			if(a[k+1]!=0)
			{m=m+a[k+1];int d=a[k+1];a[k+1]=0;
			com(k+1,m,n);a[k+1]=d;m=m-a[k+1];
			}
			if(a[k+2]!=0)
			{m=m+a[k+2];int d=a[k+2];a[k+2]=0;
			com(k+2,m,n);a[k+2]=d;m=m-a[k+2];
			}
			
		}
		else if(k==n-1)
		{
			if(a[k-1]!=0)
			{
			m=m+a[k-1];int d=a[k-1];
			a[k-1]=0;
			com(k-1,m,n);a[k-1]=d;m=m-a[k-1];
			}
			if(a[k-2]!=0)
			{
			m=m+a[k-2];int d=a[k-2];
			a[k-2]=0;
			com(k-2,m,n);a[k-2]=d;m=m-a[k-2];
			}
		}
		else if(k==n-2)
		{
			if(a[k+1]!=0)
			{m=m+a[k+1];int d=a[k+1];a[k+1]=0;
			com(k+1,m,n);a[k+1]=d;m=m-a[k+1];
			}
			if(a[k-1]!=0)
			{m=m+a[k-1];int d=a[k-1];a[k-1]=0;
			com(k-1,m,n);a[k-1]=d;m=m-a[k-1];
			}
			if(a[k-2]!=0)
			{m=m+a[k-2];int d=a[k-2];a[k-2]=0;
			com(k-2,m,n);a[k-2]=d;m=m-a[k-2];
			}
		}
		else
		{
			if(a[k-1]!=0)
			{m=m+a[k-1];int d=a[k-1];a[k-1]=0;
			com(k-1,m,n);a[k-1]=d;m=m-a[k-1];
			}
			if(a[k-2]!=0)
			{m=m+a[k-2];int d=a[k-2];a[k-2]=0;
			com(k-2,m,n);a[k-2]=d;m=m-a[k-2];
			}
			if(a[k+1]!=0)
			{m=m+a[k+1];int d=a[k+1];a[k+1]=0;
			com(k+1,m,n);a[k+1]=d;m=m-a[k+1];
			}
			if(a[k+2]!=0)
			{m=m+a[k+2];int d=a[k+2];a[k+2]=0;
			com(k+2,m,n);
			a[k+2]=d;m=m-a[k+2];
			}
		}
//	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	com(0,0,n);
	for(int i=0;i<l;i++)
	cout<<b[i]<<" ";
	//for(int i=0;i<n;i++)
//	cout<<a[i]<<" ";
}
