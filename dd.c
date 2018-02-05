
#include <stdio.h>
#include <math.h>
void main()
{
    int i=371, sum = 0, rem = 0, cube = 0, temp;
    printf ("enter a number is ",&i);
    scanf("%d", &i);
    temp = number;
    while (number != 0)
    {
        rem = number % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        number = number / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else

        printf ("The given no is not a armstrong no");
}
