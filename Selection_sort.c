#include <stdio.h>
#include <stdlib.h>

int *selection_sort(int *arr, int n);
void get_elements(int *arr, int n);
void print_array(int *arr, int n);

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
	array = selection_sort(array,n);
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

int *selection_sort(int *arr, int n) {
	
	int temp;
	int min,i,j;
	
	for(i=0;i<n-1;++i){
		min=i;
		for(j=i;j<n;++j){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp = arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	return arr;
}
