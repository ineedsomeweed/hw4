
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define S 100

int ls(const int array[], int key, int size);


int main()
{
    int a[S];
    int x, searchkey, element;
    for (x = 0; x < S; x++) a[x] = 2 * x;

    printf("enter integer searcg key:\n");
    scanf_s("%d", &searchkey);

    element = ls(a, searchkey, S);

    if (element != -1) printf("found value in element %s\n", element);
    else printf("value not found\n");

}

int ls(const int array[], int key, int size) {

    for (int i = 0; i < size; ++i) {
    
    
        if (array[i] == key) return i;
    }
    return -1;

}