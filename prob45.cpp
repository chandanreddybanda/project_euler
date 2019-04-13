#include<bits/stdc++.h>
using namespace std;
 bool isPentagonal(int number) 
{
    double penTest = (sqrt(1 + 24 * number) + 1.0) / 6.0;
    return penTest == ((int)penTest);
}
int main()
{
	long result = 0;
	int i = 143;
		while (true) 
		{
    		i++;
	    	result = i * (2 * i - 1);
    		if (isPentagonal(result)) 
			{
        		break;
    		}
	}
	cout<<i;	
}
