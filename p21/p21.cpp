
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void statica(void);
void automa(void);

int main()
{
    printf("first call to each function: \n");
    statica();
    automa();

    printf("\n\nseconf call to each function: \n");
    statica();
    automa();
    printf("\n");

}
void statica(void) {
    int i;

    static int array1[3];
    printf("\nvalues on entering staticarrayinit: \n");

    for(i = 0; i <= 2; i++) printf("array1[%d]= %d ", i, array1[i]);
    
    printf("\nvalues on exiting staticarrayinit: \n");

    for (i = 0; i <= 2; i++) printf("array1[%d]= %d ", i, array1[i]+=5);


}

void automa(void) {
    int i;
    static int array2[3] = {1, 2, 3};
    printf("\n\nvalues on entering automicarrayinit: \n");

    for (i = 0; i <= 2; i++) printf("array2[%d] = %d ", i, array2[i]);

    printf("\nvalues on exiting automicarrayinit: \n");

    for (i = 0; i <= 2; i++) printf("array2[%d] = %d ", i, array2[i] += 5);


}