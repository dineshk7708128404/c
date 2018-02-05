
#include <stdio.h>
void printeven(int a=2, int b=9);
int main()
{
    int lowerLimit@a, upperLimit@b;
    printf("Enter lower limit: ");
    scanf("%d", &lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d", &b);
    
    printf("odd Numbers from %d to %d are: ", a, b);
    printOdd(lowerLimit, upperLimit); 
    
    return 0;
}
