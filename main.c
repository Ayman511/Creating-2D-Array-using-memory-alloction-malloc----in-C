#include <stdio.h>
#include <stdlib.h>

int main(void){
    int r = 0, c = 0, count = 0, i = 0, j = 0;
    int **arr = NULL;

    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);

    // Allocating memory for arr
    arr = malloc(r * sizeof(int *));

    for(i; i < r; i++)
        arr[i] = malloc(c * sizeof(int));

    /* Affecting some values to the array */
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            *(*(arr + i) + j) = ++count;
        }
    }

    /* The output of the array */
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d -> ", *(*(arr + i) + j));
        }
        printf("END\n");
    }

}