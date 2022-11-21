#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY(x) (sizeof(x) / sizeof((x)[0]))

int* concatArraysV1( int [], int, int [], int);
void printArray( int [], int);

int main() {
	int arr1[] = {1,5,7,19}, arr2[] = {2,6,8,11,28};
	
	int *ptrM = concatArraysV1(arr1, SIZE_OF_ARRAY(arr1), arr2, SIZE_OF_ARRAY(arr2));
	
	printf("Array 1 is:\t");
	printArray(arr1, SIZE_OF_ARRAY(arr1));
	
	printf("Array 2 is:\t");
	printArray(arr2, SIZE_OF_ARRAY(arr2));
	
	printf("Array 3 is:\t");
	printArray(ptrM, SIZE_OF_ARRAY(arr1)+SIZE_OF_ARRAY(arr2));
	
	return(0);
}


int* concatArraysV1( int arr1[], int size1, int arr2[], int size2 ) {
	
	int *merged = (int*) malloc( (size1+size2)*sizeof(int) );
	int i;
	
	for( i=0; i<size1; i++ )
		merged[i] = arr1[i];
	for( ; i<size1+size2; i++ )
		merged[i] = arr2[i-size1];
	
	return merged;
}

void printArray( int a1[], int size ) {
	int i;
	for( i=0; i<size; i++ )
		printf("%d\t", a1[i]);
	printf("\n");
}
