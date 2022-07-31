#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i=0; 
  int j=0;
  int n=0;
  scanf("%d",&n);
  
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++) //in nua tren
  {
  	for(j=0;j<=i;j++)
  	printf("*");
  	printf("\n");
  }
   for(i=n-1;i>0;i--)//in nua duoi
  {
  	for(j=i-1;j>=0;j--)
  	printf("*");
  	printf("\n");
  }  







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
