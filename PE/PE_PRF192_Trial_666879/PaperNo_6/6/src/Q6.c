#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char names[5][1000];
	int i=0;
	for(i=0;i<5;i++)
	{
		scanf("%s",names[i]);
	}	

	printf("\nOUTPUT:\n");

	int j=0;
	for(i =0;i<4;i++)
	{
		for(j =i+1;j<5;j++)
		{
			if(names[i][0] > names[j][0]) //strcmp(names[i],names[j]) > 0
			{
				char temp[1000];
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
	for(i =0;i<5;i++)
	{
		printf("%s",names[i]);
		if(i<4)
		printf(" ");
	}
		
		
	return 0;
}
