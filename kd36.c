
#include <stdio.h>
 
int main()
{
    char    str[100];
    int countAlphabet;
    int counter;
 
 countSpecialChar=countSpaces=0;
 
    printf("Enter a string: ");
    gets(str);
 
    for(counter=0;str[counter]!=NULL;counter++)
    {
 
        if(str[counter]>='0' && str[counter]<='9')
        
            countSpecialChar++;
    }
 
    printf("%d \nSpecial Characters: %d",countSpecialChar);
 
    return 0;
}
