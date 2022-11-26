#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f();

int main() {
	
	srand(time(NULL));
	int current_size = 3;
	
	int *Sepet = (int *) malloc(current_size * sizeof(int));
	int i = 0;
	
	Sepet[i++] = f();
	Sepet[i++] = f();
	
	while(Sepet[i-2] + Sepet[i-1] != 12) {
		
		Sepet[i++] = f();
		
		if(i == current_size){
			current_size *= 2;
			Sepet = (int *) realloc(Sepet, current_size * sizeof(int));
		}
	} 	
	
	int j;
	
	printf("\nDizinin elemanlari: ");
	
	for(j = 0; j < i; j++) {
		printf("%d ", Sepet[j]);
	}
	
	printf("\nDizi eleman sayisi: %d\nDizinin bellekte kapladigi alan: %d\n", i, current_size);
	return 0;
}

int f() {
	return rand()%6 + 1;
}
