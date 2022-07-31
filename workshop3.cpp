#include <stdio.h> 
long dec2bi(int decimal) {
	long binary = 0;
	int remainder, i = 1;
	while (decimal != 0) {
		remainder = decimal % 2;
		decimal /= 2;
		binary = binary + remainder*i;
		i *= 10;
		
	}
	return binary;
}
int getSum(int num) {
	int sum = 0;
	while (num != 0) {
		sum = sum + num % 10;
		num /= 10;
	}
	return sum;
	
}

int getPro(int num) {
	int pro = 1;
	while(num != 0) {
		pro = pro * num %10;
		num /= 10;
	}
	return pro;
}

int revNum(int num, int remainder) {
	int rev = 0;
		while (num != 0) {
		remainder = num % 10;    
		rev = rev * 10 + remainder;
		num /= 10;
	}
	return rev;
}

int main() {
	int decimal;
	printf("Enter a decimal number: ");
	scanf("%d", &decimal);
	printf("Equivalent binary number: %d\n", dec2bi(decimal));
	
	
	
	int num, remainder;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Sum of all digits is: %d\n", getSum(num));
	printf("Product of all digits is %d\n", getPro(num));
	printf("Reverse number is: %d\n", revNum(num, remainder));
}
