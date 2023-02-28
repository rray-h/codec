#include <stdio.h>
#include <locale.h>
int main(){

	setlocale(0, "");

	int height, i, j, z;



	printf("Введите размер ёлки: ");
	scanf("%d", &height);

	for (i = 0; i <= height; i++){
		
		for (j = 0; j < height - i; j++){
			
			printf(" ");

		}
		for (z = 0; z < i*2-1; z++){
			printf("*");
		}

		printf("\n");

	}



	return  0;
}
