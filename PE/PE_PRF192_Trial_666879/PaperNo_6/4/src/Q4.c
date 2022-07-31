#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	 int arr[7];
	 int i=0;
	 int j=0;
	 int temp=0;
	for (i=0;i<7;i++)
	{
	 	scanf("%d",&arr[i]);
	 	fflush(stdin);
	}
	
	for (i=0;i<6;i++)
	{
		for(j=i+1;j<7;j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}	
		}	
	}
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for(i=0;i<7;i++)
{
	printf("%d ",arr[i]);
}






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
