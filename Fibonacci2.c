#include <stdio.h>

int fibonacci(int n)
{
	if( n > 2){
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	else{
		return 1;
	}
}


int main()
{
	int fibo = fibonacci(43);

	printf("Fibonnaci = %d\n",fibo);

	return 0;
}
