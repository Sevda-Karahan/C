#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY(x) (sizeof(x) / sizeof((x)[0]))

void concatArraysV2(int [], int, int [], int, int []);
void printArray( int [], int);

int main() {
	
	int arr1[] = {1,5,7,19}, arr2[] = {2,6,8,11,28};
	
	int size1 = sizeof(arr1)/sizeof(arr1[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	int size3 = size1+size2;
	
	int arr3[size3];
	
	concatArraysV2( arr1, size1, arr2, size2, arr3);
	
	printf("Array 1 is:\t"); printArray(arr1,size1);
	printf("Array 2 is:\t"); printArray(arr2,size2);
	printf("Array 3 is:\t"); printArray(arr3,size3);
	
	return(0);

}


void concatArraysV2( int arr1[], int size1, int arr2[], int size2, int arr3[] ) {
	
	int size3 = size1+size2;
	int i;
	
	for( i=0; i<size1; i++ )
		arr3[i] = arr1[i];
	for( ; i<size1+size2; i++ )
		arr3[i] = arr2[i-size1];
		
}

void printArray( int a1[], int size ) {
	
	int i;
	
	for( i=0; i<size; i++ )
		printf("%d\t", a1[i]);
	printf("\n");

}
