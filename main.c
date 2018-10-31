#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];
    int num;
    printf("Please enter some text below: \n");
    fgets(string, 100, stdin);
    num = (strlen(string));
    for(; num >= 0; num--)
        printf("%c", string[num]);
    return 0;
}
