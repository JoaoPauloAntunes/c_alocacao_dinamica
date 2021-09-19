// ex_alocacao_estatica.c

#include <stdio.h>
#include <stdlib.h>


// tamanho do vetor de números
#define TAM_NUMS 4


int main (void) {
    int nums[TAM_NUMS];
    int i = 0;

    nums[0] = 1;
    nums[1] = 3;
    nums[2] = 7;
    nums[3] = 2;

    // for (i = 0; i < LEN_nums; i++) {
    //     scanf("%d", &nums[i]);
    // }

    printf("nums: { ");
    for (i = 0; i < TAM_NUMS; i++) {
        printf("%d, ", nums[i]);
    }
    printf("}\n");

    return EXIT_SUCCESS;
}
