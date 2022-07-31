#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>
/*	
	void swap(int *a, int *b){
		int temp = *a; 
		*a = *b; 
		*b = temp; 
} 
	
	long long gt(long n){
		long i;
		long T=1;
		for(i=1;i<=n;i++){
			T=T*i;
		}
		return(T);
	}


	bool SoDoiXung(int n){
		int a=0, b, c=n;
		while(n!=0){
			b=n%10;
			a=a*10+b;
			n=n/10;
		}
		if(a==c) return true;
		return false;
}


	long long func(long k,long n2){
		long C = gt(n2)/(gt(k)*gt(n2-k));
		return(C);
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
	

	int giao_hoan1(int *a,int *b){
		int T;
		T = *a ; *a = *b ; *b = T ;
		printf("\na=%d\nb=%d",*a,*b);
	}
	
	int giao_hoan2(int a,int b){
		int T;
		T=a;a=b;b=T;
		printf("\na=%d\nb=%d",a,b);
	}



	float Triangle_Area(float a,float b,float c){
		float p,S;
		if(a+b>c && a+c>b && b+c>a){
			p = (a+b+c)/2;
			S = sqrt(p*(p-a)*(p-b)*(p-c));
			return S;
		} else {
			return 0;
		}
	}

	
	void bubbleSort_a(int array[], int n){ 
		int i, j; 
		for (i = 0; i < n-1; i++)       
		for (j = 0; j < n-i-1; j++) if (array[j] > array[j+1]) 
		swap(&array[j], &array[j+1]); 
	}

	void Selective_sort(int a[], int n){
		int i,j,k,max;
		for(i=0; i<n-1; i++){
			max = a[i];
			k=i;
			for(j = i+1; j<n; j++)
			if(a[j] > max){
				max = a[j];
				k = j;
			}
			if(k != i) swap(&a[i],&a[k]);
			}
			printf("%d",a[k]);
		}
*/	

	
	void removeRedSpaces(char s[])
	{int n,low,up,i,j; char x[100];
	n = strlen(s);
	i=0;j=n-1;
	while(i<n && s[i]=="")i++;
	low = i;
	while(j>0 && s[j]=="")j--;
	up = j;
	if(low>up){strcpy(s,"");return;}
	strcpy(x,"");
	i = low; j=0;
	while(i<=up)
	{while(i<up && s[i]=="")i++;
	while(i<=up && s[i]!="") x[j++] = s[i++];
	if(i<=up) x[j++] = "";
	}
	x[j] = '\0';
	strcpy(s,x);
	}
	
		
	void bubbleSort_c(char a[][MC+1], int n){
		int i, k, doicho;
		char t[MC+1];
		k = 1;
		while(1){
			doicho = 0;
			for (i = 0; i < n - k; i++){
				if(strcmp(a[i],a[i + 1]) > 0){
					strcpy (t, a[i]);
					strcpy (a[i], a[i + 1]);
					strcpy (a[i + 1], t);
					doicho = 1;
				}
			}
		if(!doicho) break;
		k++;
		}
	}
	
	void printArray(int array[], int size) {
		
	int i; 
	for (i=0; i < size; i++) 
	printf("%d ", array[i]); 
	
	}  

	void getstr (char s[], int max){
		int i,c;
		
		i = 0;
		while ((c = getchar()) != '\n' && c != EOF)
			if (i < max)
				s[i++] = (char) c;
		s[i] = '\0';
	}

	int main(){

	
	
		
	/*	
		int a[100];
		int n;
		printf("n = ");  scanf("%d",&n);
		int i=0;
		for(i=0;i<=n-1;i++){
			printf("a[%d]= ",i);
			scanf("%d",&a[i]);
		}
		printf("\n");
		for(i=0;i<=n-1;i++){
			printf("%d\t",a[i]);
		}
		printf("\n");
		printf("prime:");
		for(i=0;i<=n-1;i++){
			if(check_prime(a[i])==1){
				printf("%d\t",a[i]);
			}
		}
		printf("\n");
		printf("palindrome:");
		for(i=0;i<=n-1;i++){
			if(SoDoiXung(a[i])==true){
				printf("%d\t",a[i]);
			}
		}
		printf("\n sort:");
		Bubble_sort(a[100],n);
		
		
*/		
		
/*		float a,b,c;
		float A;
		printf("Enter a,b,c: ");	scanf("%f %f %f",&a,&b,&c);
		A =	Triangle_Area(a,b,c);
		printf("S = %f",A);
*/		
		
/*		
		int a=5;
		int b=6;
		giao_hoan(&a,&b);
		printf("\na=%d\nb=%d",a,b);
*/		
		
/*	int n;
	printf("nhap n:");	scanf("%d",&n);
	if(check_prime(n)==1){
		printf("%d la so nguyen to\n",n);
	}	else{
		printf("%d khong la so nguyen to\n",n);
	}
	int dem=0;
	int i=2;
	while(dem<n){
		if(check_prime(i)){
			printf("%d ",i);
			dem++;
		}
		i++;
	}
	
	printf("Nhap n:");	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(prime(i)==1){
			printf("%d",i);
		}
	}
*/
/*		
	long n1,k1;
	printf("n1= ");	scanf("%d",&n1);
	printf("k1= ");	scanf("%d",&k1);
	float result=func(k1,n1);
	printf("result=%f",result);	
*/		
		
	
		
	/*	
		int a,b,Cong,Tru,Nhan,Sodu;
		float Chia;
		
		
		printf("Nhap a: \n");
		scanf("%d",&a);
		printf("Nhap b: \n");
		scanf("%d",&b);
		
		Sodu = a % b;
		Cong = a + b;
		Tru = a - b;
		Nhan = a * b;
		Chia = (float) a / b;
		
		
		printf("Phep cong = %d\n",Cong);
		printf("Phep tru = %d\n",Tru);
		printf("Phep nhan = %d\n",Nhan);
		printf("Phep chia = %f\n",(float)Chia);
		printf("Phep chia lay du = %d\n",Sodu);
		
	*/	
		// printf("%d %d %d %f %d", Cong, Tru, Nhan, Chia, Sodu);
		
	
	
	
	
	
	
	
	
	/*
		int a,b;
		float thuong;
		
		printf("Nhap a,b: ");
		scanf("%d %d",&a,&b);
		
		if (b != 0)
		{
			thuong = a / b ;
			printf("Thuong a/b = %f\n",thuong);
		}
		
	*/
	
	
	
	/*	int a;
		printf("a= \n");
		scanf("%d",&a);
		
		switch (a)
		{
			case 2:
				printf("Thu %d\n",a);
				break;
			
			case 3:
				printf("Thu %d\n",a);
				break;
			case 4:
				printf("Thu %d\n",a);
				break;
			case 5:
				printf("Thu %d\n",a);
				break;
			case 6:
				printf("Thu %d\n",a);
				break;
			case 7:
				printf("Thu %d\n",a);
				break;
			case 8:
				printf("Thu %d\n",a);
				break;
			default:
				printf("Khong phai ngay trong tuan");
			}
		*/
		
		
		
		
		
		/*
		int a,b;
		printf("Nhap a,b: \n");
		scanf("%d %d",&a,&b);
		
		int min = a < b ? a : b;
		printf("min: %d",min);
				
		
		*/	
	
	
	/*
	int a,b,c;
	printf("Enter a: \n");
	scanf("%d",&a);
	printf("Enter b: \n");
	scanf("%d",&b);
	printf("Enter c: \n");
	scanf("%d",&c);
	
	
	float t;
	if (a>b){
		t=a;a=b;b=t;	
	}
	if (a>c){
		t=c;c=a;a=t;
	}
	if (b>c){
		t=b;b=c;c=t;
	}
	
	printf("OUTPUT \n");
	printf("%d\t%d\t%d",a,b,c);
	
	*/
	
	
	
	
	

/*	
	int i,n,a,t;
		
	printf("Nhap so so nguyen: ");
	scanf("%d",&n);
	
	i=1;	
	for ( i=1 ; i <= n ; i++ ){
		
		printf("Nhap so: ");
		scanf("%d",&a);
		
		t = t + a;
		
		}
		
	printf("Tong: %d",t);
*/


/*
	int i,n,a,t;
	
	printf("Nhap so so nguyen: ");
	scanf("%d",&n);
	
	i=1;
	while( i <= n ){
		printf("Nhap so: ");
		scanf("%d",&a);
		
		t = t + a;
		
		i++;	
	}
		
		printf("Tong: %d\n",t);
*/
		
		
/*		
	int i,n,a,t;
	
	printf("Nhap so so nguyen:");
	scanf("%d",&n);
	
	i=1;
	do{
		printf("Nhap so: ");
		scanf("%d",&a);
		
		t = t + a;
		
		i++;
	} while( i <= n );
	
	printf("Tong: %d",t);	
*/			
		
/*		
		int n,m,i,j;
		
		printf("Nhap n:");	scanf("%d",&n);
		printf("Nhap m:");	scanf("%d",&m);
		
		
		for(i=1;i<=n;i++)
			{for(j=1;j<=m;j++){
			
				printf("*");
			}
			printf("\n");
		}	
*/
	

/*

	int L,t;
	printf("Nhap L: ");
	scanf("%d",&L);
	int i;
	for( i=1 ; i<=L ; i++){
		t = t + i;
	}
		printf("T=%d",t);
*/
/*
	int L;
	float T;
	
	printf("Nhap L:");	scanf("%d",&L);
	int i;
	for (i=1;i<=L;i++){
		T+= (float)1/i;
	}			
		printf("T=%f",T);
*/

/*
	int L,T=1,i;
	printf("Nhap L:"); 	scanf("%d",&L);
	for(i=1;i<=L;i++){
		T = T * i;
	}
	printf("T=%d",T);
*/	

/*
	int n;
	float t=0;
	printf("Nhap n:");	scanf("%d",&n);
	int i;
	for ( i=1 ; i<=n ; i++ ){
		if( i % 2 == 0 ){
			t = t - (float)1/i;
		}	else	{
			t = t + (float)1/i;
		}
	}	
	printf("T=%f",t);	
*/



	
}
