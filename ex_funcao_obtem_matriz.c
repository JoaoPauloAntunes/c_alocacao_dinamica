// ex_funcao_obtem_matriz.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define LEN_ARRAY 3
#define NUM_ROWS 5


int **get_processed_mtx(int *array, int len_array, int num_rows) {
    // retorna números múltiplos para os valores do array

    int **mtx;
    int i = 0;
    int j = 0;

    // aloca um vetor de ponteiros para inteiros
    mtx = (int **) malloc(sizeof(int *) * len_array);

    // cada ponteiro do vetor de ponteiros aponta para um novo vetor alocado
    for (i = 0; i < len_array; i++) {
        mtx[i] = (int *) malloc(sizeof(int) * num_rows);
    }

    for (i = 0; i < len_array; i++) {
        for (j = 0; j < num_rows; j++) {
            mtx[i][j] = array[i] * (j + 1);
        }
    }

    return mtx;
}



int main (void) {
    int array[LEN_ARRAY] = {1, 2, 3};
    int **mtx;
    int i = 0;
    int j = 0;
    
    mtx = get_processed_mtx(array, LEN_ARRAY, NUM_ROWS);

    printf("{\n");
    for (j = 0; j < NUM_ROWS; j++) {
        printf("\t{ ");
        for (i = 0; i < LEN_ARRAY; i++) {
            printf("%d, ", mtx[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");

    return EXIT_SUCCESS;
}
