#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int arr[6];
  int i=0;
  for (i=0;i<6;i++)
  {
  	scanf("%d",&arr[i]);
  }
  int sum=0;
  for(i=0;i<6;i++)
  {
  	if (arr[i]%2==0)
  	{  
  	sum=sum+arr[i];
  	}
  }
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",sum);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
