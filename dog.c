#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>

int getch( ) {
struct termios oldt, newt;
int ch;
tcgetattr( STDIN_FILENO, &oldt );
newt = oldt;
newt.c_lflag &= ~( ICANON | ECHO );
tcsetattr( STDIN_FILENO, TCSANOW, &newt );
ch = getchar();
tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
return ch;
}
int main(){
    
    int i, j, rPlace, range = 20;
   
    char key;

    char arr[20][41];
    
    int ox, oy;

    int x = 3, y = 2;

    int xa = 2, ya = 4;
   

    do{

        sprintf(arr[0], "####################################");
        sprintf(arr[19], "####################################");
        
        for (int i = 1; i < 19; i++) {
        
        	sprintf(arr[i], "#                                  #");
        }
    
	arr[ya][xa]='*';
        arr[y][x]='o';	

        srand(time(NULL));

	if((y == ya) && (x == xa)){
		
		xa = rand();
		xa = xa % range;
		ya = rand();
		ya = ya % range;
	} 
	
	system("clear"); 
                
	if(arr[y][x] == arr[ya][xa]){
	
		arr[0][0] == i;
		i++;
	}


        for (int i = 0; i < 20; i++) {
            
            printf("%s\n", arr[i]);
        }
        
        key = getch();

	ox = x;
	oy = y;

        if(key=='w') y--;
        if(key=='s') y++;
        if(key=='a') x--;
        if(key=='d') x++;
	if(arr[y][x]=='#'){
	
		x = ox;
		y = oy;	
	}
        
    } while(key!='e');
    
    return 0;
}

