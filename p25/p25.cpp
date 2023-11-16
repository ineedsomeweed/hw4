// p25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int addbyone(int& xref) {

    xref++;
    printf("xref=%d\n", xref);
    return xref;
}

void main()
{
    int x = 100;
    int y = addbyone(x);
    printf("x=%d\n", x);

}

