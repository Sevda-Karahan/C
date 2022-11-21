#include <stdio.h>
#include <stdlib.h>

int main () {
	int n;
	int *list;
	
	printf("size (n) : ");
	scanf("%d",&n);
	
	list = (int *) malloc(n * sizeof(int)); //allocated bytes have garbage values.
	//OR: list = (int *) calloc(n, sizeof(int));  //but the allocated bytes are 0.
	
	if (list == NULL){
		printf("%s:%d>Cannot allocate memory for the array...\n", __FILE__, __LINE__);
		return -1;
	} 
	
	//use the memory and then
	free(list);
	
	return 0;
}
