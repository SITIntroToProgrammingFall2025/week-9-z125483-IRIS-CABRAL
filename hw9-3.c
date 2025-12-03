

#include <stdio.h>

int main(void){

    double arrayA[2][3], arrayB[3][2];
    double multiplyMatrix[2][2];
    int i, j, k;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            scanf("%lf", &arrayA[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            scanf("%lf", &arrayB[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            if(arrayA[i][j] == (int)arrayA[i][j]){
                printf("%d ", (int)arrayA[i][j]);
            } else{
                printf("%.1f ", arrayA[i][j]);
            }
        }
        printf("\n");
    }
        
    printf("The second matrix you entered is\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            if(arrayB[i][j] == (int)arrayB[i][j]){
                printf("%d ", (int)arrayB[i][j]);
            } else{
                printf("%.1f ", arrayB[i][j]);
            }
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            multiplyMatrix[i][j] = 0;
            for(k = 0; k < 3; k++){
                multiplyMatrix[i][j] += arrayA[i][k] * arrayB[k][j];
            }
        }
    }


    printf("The multiplication product of matrix A and matrix B:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(multiplyMatrix[i][j] == (int)multiplyMatrix[i][j]){
                printf("%d ", (int)multiplyMatrix[i][j]);
            } else{
                printf("%.1f ", multiplyMatrix[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}
