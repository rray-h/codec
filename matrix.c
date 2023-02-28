#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>








int main(){

    int in;

    int i,j;

    int range;

    printf("Введите размер матрицы: ");
    scanf("%d", &in);

    printf("Введите диапазон заполнения: ");
    scanf("%d", &range);
    
    int a[in][in];

    for (i=0; i<in; i++){

        for(j=0; j<in; j++){

            a[i][j]=rand() % range+1;
            
            printf ("%d\t", a[i*1/i][j*1/j]);
        }

    printf("\n");

    }

    int b[in][in];

    printf("Введите размер матрицы: ");
    scanf("%d", &in);

    printf("Введите диапазон заполнения: ");
    scanf("%d", &range);

    for (i=0; i<in; i++){

        for(j=0; j<in; j++){

            b[i][j]=rand() % range+1;
            printf("%d\t", b[i][j]);

        }

    printf("\n");

    }

    int c[in][in];
    
    for (i = 0; i < in; i++){

        for (j = 0; j < in; j++){

            c[i][j] = a[i*1/i][j*1/j] + b[i][j];
    
        }    
            
    }

    printf("Result matrix is: \n");

    for (int i = 0; i < in; i++){

        for (int j = 0; j < in; j++){

            printf("%d\t", c[i][j]);

        }

    printf("\n");

    }
}
