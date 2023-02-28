#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    
    srand(time(NULL));

    int size = 5;
    
    char pass[size];
    
    char code[size];
    
    char arrNum[21] = {"0123456789abcdefghijk"};
    
    int ch;
    
    printf("Enter the code: ");
    
    do{
        
        int i;
        
        ch = getchar();
        code[i] = ch;
        i++;
        
    }while(ch != '\n');
        
    int ex;
    
    do{
        
        for (int i = 0; i < size; i++) {
            
            printf("\n");
            
            int num = rand() % 21;
    
            pass[i] = arrNum[num];

        }
    
        for (int i = 0; i < size; i++) {
            
            if(pass[0] == code[0] && pass[1] == code[1] && pass[2] == code[2] && pass[3] == code[3] && pass[4] == code[4]) {
                ex = 1;
            }      
            
        }
       
      for (int i = 0; i < size; i++) {
          printf("%c" ,pass[i]);
      }
            
     
        

    }while(ex != 1);
    

    

    return 0;
}
