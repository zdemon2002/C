#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void reverse(char ss[], int i){
	int z;
	char t;
	for (z = 0; z < i / 2; z++){
		t = ss[z];
		ss[z] = ss[i - z - 1];
		ss[i - z - 1] = t;
	}
}

void input(){
	char ss[100];
	int i = 0;
	int ch;
	printf("\nEnter a string ended by . : ");
	while((ch = getchar()) != '.'){
		ss[i++] = ch;
	}
	ss[i] = '\0';
	fflush(stdin);
	printf("\nThe original string : %s", ss);
	reverse(ss, i);
	printf("\nReverse string : %s", ss);
	int z;
	for (z = 0; z <= 1; z++){
		ss[0] = '\0';
	}
}

	
int main(){
	
	
//	1. Coin Toss
	int select;
	int numToss;
	int tails,heads,x;
	float percent;
	
	
	printf("\n1. Start tossing");
	printf("\n0. Exit");
	printf("\nyour selection (0 -> 1): ");	scanf("%d", &select);
	
	if(select == 1){
		printf("\nEnter number of tosses: ");	scanf("%d", &numToss);
		printf("\nNumber of tosses: %d", numToss);
		
		srand((int)time(0));
		x = rand();
		printf("\n%d",x);
		
		if (x < select){
			heads = x;
			printf("\nNumber of heads: %d", heads);	
		}	else {
			heads = x % ( numToss + 1 - 0);
			printf("\nNumber of heads: %d", heads);
		}
		
	
		tails = numToss - heads;
		printf("\nNumber of tails: %d", tails);
		
		percent = ((float) heads / (float) numToss) * 100;
		printf("\nPercentage of heads for all tosses: %f", percent);
	} 



	printf("\n\n\n\n");



// 2. Input & reverse a string
	char confirm;
	do {
		input();
		printf("\nAnother run (y/n)?");
		fflush(stdin);
		scanf("%c", &confirm);
		printf("\n");
	}
	while ( confirm == 'y' || confirm  == 'Y');

}
