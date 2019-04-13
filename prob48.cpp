#include<iostream>
using namespace std;
int main()
{
	long long int result = 0;
long long int modulo = 10000000000;
 
for (int i = 1; i <= 1000; i++) {
    long long int temp = i;
    for (int j = 1; j < i; j++) {
        temp *= i;
        temp %= modulo;
    }
 
    result += temp;
    result %= modulo;
}
	cout<<result;
}
