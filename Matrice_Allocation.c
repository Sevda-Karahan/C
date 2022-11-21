#include <stdio.h>
#include <stdlib.h>

int main () {
	int **mat;
	int n, m, i;

	printf("Rows: ");
	scanf("%d",&n);
	
	printf("Columns: ");
	scanf("%d",&m);
	
	mat = (int **) malloc(n*sizeof(int *));
	
	if(mat == NULL)
	{
		printf("%s:%d>Cannot allocate memory for the array...\n", __FILE__, __LINE__);
		return -1;	
	}
	
	for(i = 0; i < n; ++i){
		mat[i] = (int *) malloc(m * sizeof(int));
			
		if(mat[i] == NULL)
		{
			printf("%s:%d>Cannot allocate memory for the array...\n", __FILE__, __LINE__);
			return -1;	
		}
	}
	
	//use the memory and then
	
	for(i = 0; i < n; ++i){
		free(mat[i]);
	}
	
	free(mat);
	
	return 0;
}
