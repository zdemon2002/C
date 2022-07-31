#include<stdio.h>
#include<conio.h>

	int s1(int n){
		int i,s1=0;
		for(i = 1; i <= n; i++){
			s1 =  s1 + i ;
		}
		return(s1);
	}
	
	int s2(int n){
		int i;
		float s2=1;
		for(i=1;i<=n;i++){
			s2=s2*i;
		}
		return(s2);
	}
	
	double s3(int n){
	double s3,i;
	for (i=1;i<=n;i++){
		s3 = s3+ 1/i;
	}			
	return s3;
	}

	int	check_prime(int n){
		if(n<2){
			return(0);
		}
		int i;
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				return(0);
			}
		}
		return(1);
	}
	
	

	int	commonPrimeDivider(int a,int b){
		int x=1;
		while( x<a ){
			if( a%x == 0 && b%x == 0 ){
				if(check_prime(x)==1){
					printf("%d ",x);
				}
			}
		x++;	
		}
	return x;	
	}
	
	int GreatestCommonDivider(int a,int b){
		int x=1;
		int kq=1;
		while( x<a ){
			if( a%x == 0 && b%x == 0){
				kq = x;
			}
		x++;	
		}
	return kq;	
	}
	
	int LeastCommonDivider(int a,int b){
		int lcm;
		lcm = a*b/gcd(a,b);
	}
	
	
	int main(){
		int n;
		printf("Enter n: ");	scanf("%d",&n);
		if(n<=5){
			printf("n must be > 5, please reenter!");
			printf("\nEnter n: ");	scanf("%d",&n);
		}
	
	printf("S1 = %d",s1(n));
	printf("\nS2 = %d",s2(n));
	printf("\nS3 = %f",s3(n));
	printf("\n\nEnter n: ");	scanf("%d",&n);
	
	if(check_prime(n)==1){
		printf("%d is a prime number",n);
	} else {
		printf("%d is not a prime number",n);
	}

//		Q2
	int a,b;
	printf("\nEnter m,n: ");	scanf("%d %d",&a,&b);
	printf("Common prime divisors: ");	cpd(a,b);
	printf("\nGCD: %d",gcd(a,b));
	printf("\nLCM: %d",lcm(a,b));
	}
