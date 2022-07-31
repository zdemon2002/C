#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i=0;
	char str[20];
 	scanf("%s",&str);
	
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	int count;
	if(strlen(str)%2!=0)
	{
	count=((strlen(str)-5)/2);  
	for (i=count;i<count+5;i++)
	{
		printf("%c",str[i]);
	}
	}





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
