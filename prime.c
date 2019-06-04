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

int main()
{
  prime();
}
