#include <stdio.h>
#include <stdlib.h>

void printarry(const int a[][3]);

int main(void) {

	int a1[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int a2[2][3] = { 1, 2, 3, 4, 5 };
	int a3[2][3] = { {1, 2}, {4} };

	printf("%values in array1 by row are: \n");
	printarry(a1);

	printf("%values in array2 by row are: \n");
	printarry(a2);

	printf("%values in array3 by row are: \n");
	printarry(a3);

}

void printarry(const int a[][3])
{

	for (int i = 0; i <= 1; i++) {
	
		for (int j = 0; j <= 2; j++) {
			printf("%d ", a[i][j]);
		
		}
		printf("\n");
	}


}