#include <stdio.h>
#include <math.h>
 
int main()
{
     int a=3, d=1, n=3, i, tn;
     int sum = 0;
 
     printf(" first term value of the A.P. series",a);
     scanf("%d", &a);
     printf(" total numbers in the A.P. series",n);
     scanf("%d", &n);
     printf("common difference of A.P. series",d);
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     tn = a + (n - 1) * d;
     printf("Sum of the A.P series is: ");
     for (i = a; i <= tn; i = i + d )
     {
          if (i != tn)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
