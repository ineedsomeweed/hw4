#include <stdio.h>
#include <stdlib.h>
#define SIZE 12

int main(void) {

	int n[SIZE] = {1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
	int total = 0;

	for (int i = 0; i < SIZE; i++) total+=n[i];

	printf("toatl of array element values is %d\n", total);

	//for (int i = 0; i < SIZE; i++) printf("%7d%13d\n", i, n[i]);


}