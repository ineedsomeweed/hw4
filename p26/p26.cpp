﻿// p25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/*int addbyone(int& xref) {

    xref++;
    printf("xref=%d\n", xref);
    return xref;
}
*/

void main()
{
    char array[5];
    printf("    array= %p\n&array[0]= %p\n   &array= %p\n", array, &array[0], &array);

}

