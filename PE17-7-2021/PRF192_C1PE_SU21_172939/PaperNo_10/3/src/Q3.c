#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n=0; 
  int i=0;
  int arr[1000];
  scanf("%d",&n);
  for (i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
  int temp=0;
  int j=0;
  for (i=0;i<n-1;i++)
  {
  	for(j=i+1;j<n;j++)
  	{
  	if(arr[i]<arr[j])
		{
	  	temp=arr[j];
	  	arr[j]=arr[i];
	  	arr[i]=temp;
		}	
	}
  }
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(i=0;i<n;i++)
  {
  	printf("%d\n",arr[i]);
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
