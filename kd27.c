
#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[20];
	int i,n,count=0,count1;;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9'||a[i]=='0')
		count++;
		else
		count1++;
	}
	if(count==n)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
	
}
