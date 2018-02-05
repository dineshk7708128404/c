
#include <stdio.h>
void printOdd(int a=1, int b=6);
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
