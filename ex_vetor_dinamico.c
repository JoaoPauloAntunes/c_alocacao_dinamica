// ex_vetor_dinamico.c

#include <stdio.h>
#include <stdlib.h>


// tamanho do vetor de números
// #define TAM_NUMS 4


int main (void) {
    int *nums;
    int tamNums = 0;
    int i = 0;
    int *ptr;

    tamNums = 2;
    nums = (int *) malloc(sizeof(int) * tamNums);


    for (i = 0; i < tamNums; i++) {
        printf("\ndigite um número [%d]: ", i);
        scanf("%d", &nums[i]);
    }

    printf("nums: { ");
    for (i = 0; i < tamNums; i++) {
        printf("%d, ", nums[i]);
    }
    printf("}\n");

    // tamNums += 3;

    // for (i = 2; i < tamNums; i++) {
    //     printf("\ndigite um número [%d]: ", i);
    //     scanf("%d", &nums[i]);
    // }

    // printf("nums: { ");
    // for (i = 0; i < tamNums; i++) {
    //     printf("%d, ", nums[i]);
    // }
    // printf("}\n");

    ptr = nums;

    printf("ptr: { ");
    for (i = 0; i < tamNums; i++) {
        printf("%d, ", ptr[i]);
    }
    printf("}\n");

    ptr = &i;
    printf("ptr: %p\n", (void *)ptr);
    printf("*ptr: %d\n", *ptr);
    printf("&ptr: %p\n", (void *)&ptr);
    
    printf("\n&i: %p\n", (void *)&i);

    return EXIT_SUCCESS;
}
