#include<stdio.h>
#include<math.h>
int prime()
{
   int m, i, k, c;
   c = 0;
   for(m=1; m<=5000000; m=m+2)
       {
		   k=sqrt(m);
           for(i=2; i<=k; i++)
                if(m%i==0) break;
           if(i>k) c++;
   }
    printf("%d\t", c);
    return 0;
}

int fibonacci(int n)
{
	if( n > 2){
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	else{
		return 1;
	}
}

double superpi()
{
  double s=1;
  double pi=0;
  double i=1.0;
  double n=1.0;
  while(fabs(i)>=1e-9){
    pi+=i;
    n=n+2;
    s=-s;
    i=s/n;
  }
  pi=4*pi;
  printf("pi：%.9f\n",pi);
  return 0;
}

int main()
{
  prime();
  superpi();
  int fibo = fibonacci(43);
	printf("Fibonnaci = %d\n",fibo);
}
