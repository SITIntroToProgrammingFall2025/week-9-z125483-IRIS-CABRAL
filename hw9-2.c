

#include <stdio.h>

int main(void){

    int initialArray[3][3], transposed[3][3], i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &initialArray[i][j]);
        }
    }

    printf("You entered\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", initialArray[i][j]);
        }
        printf("\n");
    }


    printf("Output:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            transposed[i][j] = initialArray[i][2-j];
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
