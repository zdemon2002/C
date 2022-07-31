#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int isPrime(int n);
int isPrime(int n)
{
	int i=0;
	if(n<2)
	{
	
	return 0;
	}
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n=0;
  int i=0;
  int j=0;
  scanf("%d",&n);
  
  
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i=n;i>0;i--)
  {
  	if (i!=n)
  	{
  		
  		  
  		
	  	if (isPrime(i)==1)
	  	{
		  
	  	printf("%d\n",i);	
		}
		
	}
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
