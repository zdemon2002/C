#include<stdio.h>

int	check_prime(int n){
		if(n<2){
			return(0);
		}
		int i;
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				return(0);
			}
		}
		return(1);
	}

int main(){
	int l,u,c;
	int i=0,p;
	
	printf("Lower limit: ");	scanf("%d",&l);
	printf("\nUpper limit: ");	scanf("%d",&u);
	printf("\nNumber of collumns: ");	scanf("%d",&c);
	
	for(p=l;p<u;p++){
		if(check_prime(p)==1){
			printf("%d",p);
			if(i<c-1){
				printf("\t");
				i++;
			}	else if (i==c-1){
				printf("\n");
				i=0;
			}
		
		}
	}
	



/*	int y;
	float annualRate,rate,x,p0,fv;
	printf("1.Test saving account\n");
	printf("Principal = ");	scanf("%f",&p0);
	printf("Annual rate = ");	scanf("%f",&annualRate);
	printf("No of years = ");	scanf("%d",&y);
	
	rate = 1 + annualRate;
	x=1;
	for(i=0;i<y;i++){
		x = rate * x;	
	}
	fv = x * p0;
	printf("Amount after 2 years = %f",fv);


	printf("\n2.Investment calculation\n");
	printf("Future = ");	scanf("%f",&fv);
	printf("Annual rate = ");	scanf("%f",&annualRate);
	printf("No of years = ");	scanf("%d",&y);
	
	rate = 1 + annualRate;
	x=1;
	for(i=0;i<y;i++){
		x = rate * x;	
	}
	p = fv / x;
	printf("Principle should be = %f",p0);
*/

}
