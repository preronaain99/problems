#include<iostream>
using namespace std;
int main()
{
	int n;

	int fib[n]; 

	for ( int i = 0; i < n; i++ )
	{
		if ( i == 0 ) 
			fib[i] = 0;
		else if ( i == 1 ) 
			fib[i] = 1;
		else 
        fib[i] = fib[i -1] + fib[i -2];
	}

	for ( int i = 0; i < n; i++)
		cout<< "Fib[" << i << "] = " << fib[i];

	return  0 ;
}