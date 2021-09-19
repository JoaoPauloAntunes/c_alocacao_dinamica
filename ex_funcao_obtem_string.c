// ex_alocacao_estatica.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void to_upper(char* str)
{ 
    while (*str)
    {
        *str = toupper((unsigned char) *str);
        str++; // aritmética de ponteiros
    }
}


char *get_allocated_str() { 
    char exampleStr[] = "this is a example\0";

    char *str = (char *) malloc(sizeof(char) * strlen(exampleStr) + 1);
    strcpy(str, exampleStr);
    to_upper(str);

    printf("\nJ = %d\n", 74);
    printf("\nJ = %c\n\n", 74);

    printf("*exampleStr: %s\n", exampleStr);
    printf("exampleStr: %p\n", (void *) exampleStr);

    printf("\nstr: %s\n", str);
    printf("str: %p\n", (void *) str);

    return str;
}


int main (void) {
    char *str = get_allocated_str();

    printf("\n*str: %s\n", str);
    printf("str: %p\n", (void *) str);

    return EXIT_SUCCESS;
}
