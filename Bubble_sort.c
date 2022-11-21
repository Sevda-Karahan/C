#include <stdio.h>
#include <stdlib.h>

int *bubble_sort(int *arr, int n);
void get_elements(int *arr, int n);
void print_array(int *arr, int n);
void swap(int *, int *);

int main(){
	int *array, n;
	
	printf("Array size(n): ");
	scanf("%d",&n);
	
	array = (int *) calloc(n,sizeof(int));
	
	printf("Enter the array elements:\n");
	get_elements(array,n);
	
	printf("Array:\n");
	print_array(array,n);
	
	printf("\nSorted array:\n");
	array = bubble_sort(array,n);
	print_array(array,n);
	
	return 0;
	
}

void print_array(int *arr, int n) {
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void get_elements(int *arr, int n) {
	int i;
	for(i=0;i<n;++i){
		printf("array[%d] = ",i);
		scanf("%d",&arr[i]);
	}
}

int *bubble_sort(int *arr, int n) {
	
	int temp;
	int i,j;
	
	for(i=0;i<n-1;++i){
		for(j=1;j<n-i;++j){
			if(arr[j-1]>arr[j]){
				swap(&arr[j-1],&arr[j]);
			}
		}
	}
	return arr;
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
