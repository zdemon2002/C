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
  int arr[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
  int count=0;
  for (i=0;i<n;i++)
  {
  	for(j=i;j<n;j++)
  	{
  		if(arr[i]==arr[j])
  		{
  			if(i!=j)
  			count=count+1;
		}
	}
  }
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",count);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
