#include<stdio.h>


void swap(int *a, int *b) { 

	int temp = *a; 
	*a = *b; 
	*b = temp; 
	
}  

// bubble sort function
void bubbleSort(int array[], int n){
	 
	int i, j; 
	for (i = 0; i < n-1; i++)       
	for (j = 0; j < n-i-1; j++) if (array[j] > array[j+1]) 
	swap(&array[j], &array[j+1]); 
	
}  
 
// Function to print the elements of an array
void printArray(int array[], int size) {
		
	int i; 
	for (i=0; i < size; i++) 
	printf("%d ", array[i]); 
	
}   

int valueSearch(int array[],int size,int S){

	int i;
	for (i = 0; i < size; i++){
		if (array[i] == S){
			printf("%d found at position %d\n",S, i+1);
		}
	}
}

int main(){
	int Selection,Search;
	int i,n,j,t;
	int a[100];
	
	do {
		printf("Select options:");
		printf("\n1.	Enter the list of float numbers");
		printf("\n2.	Sort the list in increasing order");
		printf("\n3.	Search value x in the list");
		printf("\n4.	Display the list");
		printf("\n0.	Exit");
		printf("\nYour selection (0 -> 4): ");		
		scanf("%d",&Selection);
		
		if (Selection == 1){
			printf("Input size of array n = ");	scanf("%d",&n);
			printf("Enter %d float numbers: ",n);
			for( i = 0; i < n; i++){
				scanf("%d", &a[i]);
			}
		}
		
		
		if (Selection == 2){
			printf("Before sorting: ");
			printArray(a,n);
			printf("\nAfter sorting: ");
			bubbleSort(a,n);
			printArray(a,n);
		printf("\n");		
		}
		
		if (Selection == 3){
			printf("Enter the value to be searched: ");
			scanf("%d", &Search);
			valueSearch(a,n,Search);
		}
				
		if (Selection == 4){
			printArray(a,n);
			printf("\n");
		}		
	}	while (Selection < 5 && Selection != 0);	
}
