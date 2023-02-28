#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int bin(int in){
    
    int arr[999];
    
    for(int i=0; in>1; i++){
        if(in%2==0){
            arr[i]=0;
            in/=2;
        }        
        else{
            arr[i]=1;
            in/=2;
        }
        printf("%d", arr[i]);
    }
    return 0;
}


int convertBin(long long);


int main(){

    long long n;
    
    int in, sys, sysCon;
    
    printf("Choose system(2, 10, 16): ");
    scanf("%d", &sys);
    
    if(sys==2) {
        printf("Enter a binary number: ");
        scanf("%lld", &n);
    }
    else if(sys==10) {
        printf("Enter a dec number: ");
        scanf("%d", &in);
    }
    else if(sys==16) {
        printf("Enter a hex number: ");
        scanf("%x", &in);
    }
    
    printf("In binary: %d", convertBin);
    printf("In decimical: %d");
}

int convertBin(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
    }
    
}




