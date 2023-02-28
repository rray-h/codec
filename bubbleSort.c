#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i, j, q, size;
    
    printf("Enter the size array: ");
    scanf("%d", &size);
    
    int arr[size];

    char arrEgg[10] = {"I love you"};
    
    printf("Enter the number to array: \n");
    for (int k = 0; k < size; k++) {
        printf("Enter the arr[%d]: ", k);
        scanf("%d", &arr[k]);
    }
    
    
    for ( i = 0; i < size - 1; i++ ) {
        
        for ( int j = 0; j < size - i - 1; j++ ) {
            
            if(arr[j]>arr[j + 1]){
                
                q = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1]  = q;
                
            }
        }
    }
    
    for ( i = 0; i < size; i++) {
        
	if(arr[i] == 143){
			
		printf("%s", arrEgg);
		system("clear");
		break;
	}
	else{
	
		printf("%d ", arr[i]);
	}
    }
    
    printf("\n");
    return 0;
}
