#include<stdio.h>
#include<conio.h>

double myExp(double x, double n){
	double sum=1;
	int i;
	for(i=n-1;i>0;--i){
		sum = 1 + x * sum / i;
	}
	return(sum);
}

int main()
 {system("cls");
  double x, epsi; int n;
  x = 1.5; epsi = 0.00001; n = 1000;
  printf("\n");
  printf(" exp(%.1f) = %f\n", x,exp(x));  
  printf(" exp(%.1f,%d) = %f\n", x, n, myExp(x,n));  
  printf(" exp(%.1f,%f) = %f\n",x, epsi, myExp(x,epsi));  
  printf("\n");
  system("pause");
  return(0);
 }
