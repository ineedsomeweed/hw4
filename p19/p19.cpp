
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1[20];
    char string2[]= "string literal";

    printf("enter a string: ");
    scanf_s("%s", string1, sizeof(string1));

    printf("string1 is: %s\nstring2 is: %s\nstring1 with spaces between charaters is: \n", string1, string2);

    for (int i = 0; string1[i] != '\0'; i++) printf("%c ", string1[i]);
    printf("\n");
    system("pause");
    return 0;
}
