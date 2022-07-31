#include<stdio.h>
#include<stdlib.h>

void input(int *num, int *den){
	
	printf("\nEnter numerator: ");	scanf("%d",num);
	printf("\nEnter denominator: ");	scanf("%d",den);
	
	while(*den == 0){
		printf("\nEnter denominator: ");	scanf("%d",den);
	}
	
}

void display(int num, int den){
	
	printf("%d/%d\n",num,den);
}

void simplify(int *num, int *den){
	int m,n,j;
	m=*num;
	n=*den;
	while(n>0){
		j = m % n;
		m = n;
		n = j;
	}
	*num = *num/m;
	*den = *den/m;
	
}



int main(){
	int a,b;
	char ans;
	do{
	printf("1. Input fraction\n");
	input(&a,&b);
	printf("2. Simplify fraction\n");
	display(a,b);
	simplify(&a,&b);
	printf("=\n");
	display(a,b);

	printf("Another run (y/n)?");
	fflush(stdin);
	scanf("%c",&ans);
    }while(ans=='Y'||ans=='y');
	return 0;
}
