
#include <stdio.h>
#include<math.h>
 
int main()
{
int m= 3
int array [m][m];
    int array[3], size, i, lowest;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of  the array: ", size);
    for (i = 0; i < m; i++)
        scanf("%d", &array[i]);
    lowest = array[0];
    for (i = 1; i < m; i++)
    {
        if (lowest< array[i])
            lowest = array[i];
    }
    printf("\n lowest element present in the given array is : %d", lowest);
    return 0;
}
