#include<stdio.h>
#include<math.h>
int main(){
//	Q1
// 	1. 2. 3.
	int a,b,c,x;
	printf("Enter a = ");	scanf("%d",&a);
	printf("Enter b = ");	scanf("%d",&b);
	printf("Enter c = ");	scanf("%d",&c);
	printf("Enter x = ");	scanf("%d",&x);
	
	float s1,s2;
	s1 = a*x*x + b*x + c;
	printf("S1 = %f",s1);
	if ( b*b - 4*a*c > 0 ){
		s2 = sqrt( b*b - 4*a*c );
	}	else	{
		s2 = 0;
	}
	printf(" S2 = %f",s2);
	
// 	4. 5.		
	printf("\nEnter a, b, c = ");	scanf("%d %d %d",&a,&b,&c);
	if(	a + b >= c || a + c >= b || b + c >= a ){
		float p;
		p = ( a + b + c )/2;
		printf("Perrimeter = %f",p);
		float A;
		A = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nArea = %f",A);
	}	else	{
		printf("a, b, c are not sides of a triangle.");
	}
	
	
	
// 	Q2
	printf("\n\n\n Q2");
	printf("\nEnter a, b, c = ");	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("\nMax = %d",a);
	}	else if(b>c && b>a){
		printf("\nMax = %d",b);
	}	else {
		printf("\nMax = %d",c);
	}
	if(a<b && a<c){
		printf("\nMin = %d",a);
	}	else if(b<a && b<c){
		printf("\nMin = %d",b);
	}	else{
		printf("\nMin = %d",c);
	}
	float t;
	if(a>b){
		t = b; b = a;a = t;
	} if(a>c){
		t = c; c = a; a = t;
	}	if(b>c){
		t = b; b = c; c = t; 
	}
	printf("\nAscending order: %d %d %d",a,b,c);	
}
