#include<bits/stdc++.h>
using namespace std;
int find(int n)
{
	int x=sqrt(2*n);
	if(x*(x-1)==2*n||x*(x+1)==2*n)
	return 1;
	else
	return 0;
}
int main()
{
	fstream f;
	f.open("prob42_words.txt");
	string s="";	char c1;
	f>>c1;
	int cou=0;
	while(f)
	{
		char c;
		f>>c;
		if(c!='"')
		s=s+c;
		else
		{
			int x=0;
			for(int i=0;i<s.length();i++)
			x=x+int(s[i])-64;
			if(find(x))
			cou++;
			s="";
			f>>c;
			f>>c;
		}
	}
	cout<<cou;
}
