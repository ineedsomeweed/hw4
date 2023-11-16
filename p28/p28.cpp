// p28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define size 5

void ma(int b[], int s);
void me(int e);

int main()
{
    int a[size] = { 0, 1, 2, 3, 4 };
    printf("effects of passing entire array bt refference:\n\nthe"
        "values of the original array are: \n");
    for (int i = 0; i < size; i++) printf("%3d", a[i]);
    printf("\n");

    ma(a, size);
    printf("the value of the modified array are: \n");
    for (int i = 0; i < size; i++) printf("%3d", a[i]);

    printf("\n\n\neffects of passing array element"
        "by value: \n\nthe value of a[3] is %d\n", a[3]);
    me(a[3]);
    printf("the value of a[3] is %d\n", a[3]);

}

void ma(int b[], int s) {

    for (int j = 0; j < s; j++) b[j] *= 2;

}

void me(int e) {


    printf("value in modifyelement id=s %d\n", e*=2);
}