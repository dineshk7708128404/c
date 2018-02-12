
#include <stdio.h>

int main()
{
 FILE *fp;
 char filename[100];
 char ch;
 int linecount;


 linecount = 0;
 
  printf("Enter a filename :");
  gets(filename);
  
 
   fp = fopen(filename,"r");



   {
	
	   while ((ch=getc(fp)) != EOF) {
	   	
		    if (ch != ' ' && ch != '\n') { ++linecount; }
		  
		  
		   


	   }

	   if (charcount > 0) {
		++linecount;
	
	   }
    }
   else
      {
         printf("Failed to open the file\n");
        }

    printf("Lines : %d \n", linecount);
    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

getchar();
return(0);
}

