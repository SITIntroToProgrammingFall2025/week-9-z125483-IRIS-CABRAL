

#include <stdio.h>

int main(void){

    int array2D[2][2];
    int i, j;
    double determinantArray;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &array2D[i][j]);
        }
    }

    printf("You entered\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ", array2D[i][j]);
        }
        printf("\n");
    }
        
    double determinantA = (array2D[0][0] * array2D[1][1]);
    double determinantB =  (array2D[0][1]*array2D[1][0]);
    determinantArray = determinantA - determinantB;
    printf("Determinant is %.5f", determinantArray);

    return 0;
}
