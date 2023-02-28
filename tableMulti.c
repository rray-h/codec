#include <stdio.h>

int main(){

	int size;

	printf("Enter the size table multipli: \n");
	
	scanf("%d", &size);

	int arr[size][size];

	for(int s = 0; s < size; s++){
	
		for(int i = 0; i < size; i++){

			arr[0][i] = i + 1;
			arr[s][0] = s + 1;

			for(int c = 1; c < size; c++){
			
				arr[s][c] = arr[0][i] * arr[s][0];
				arr[c][i] = arr[0][i] * arr[s][0];
			}

	
			printf("%d	", arr[s][i]);
		}
		printf("\n");
	}

	return 0;
}
