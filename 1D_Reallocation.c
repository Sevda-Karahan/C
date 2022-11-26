#include <stdio.h>
#include <stdlib.h>
 
int f(int N);

int main() {
	
	int N = 7;
	
	int *A = (int * ) calloc(2, sizeof(int));
	int current_lenght = 2;
	
	printf("N = %d\n",N);
	A[0] = N;
	int i = 1;
	
	while(N != 1) { 
		N = f(N);
		A[i++] = N;
		if(i == current_lenght){
			current_lenght *= 2;
			A = (int *) realloc(A, current_lenght * sizeof(int));
			
		}
	}
	
	int j;
	printf("Dizi elemanlari: ");
	
	for(j = 0; j < i; j++) {
		printf("%d ", A[j]);
	}
	
	printf("\nDizinin eleman sayisi = %d , dizinin hafizada kapladigi alan = %d\n", i, current_lenght);
	
	free(A);
	return 0;
}

int f(int N) {
	if(N % 2 == 0)
		return N / 2;
	return 3*N + 1;
}
