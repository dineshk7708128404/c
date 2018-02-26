#include <stdio.h>
#include<conio.h>
 
int main(void) 
{
	int i,even;
	printf("enter the number:");
	scanf("%d",&i);
	if(i%2==0)
	{
		even=i-2;	
	}
	else
	{
		even=i-1;
	}
	printf("\n%d",even);
	return 0;
}
