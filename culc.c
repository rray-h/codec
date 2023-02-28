#include <stdio.h>



int main(){
    
    int a, b, r, choose;

    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("1. +\n2. -\n3. *\n4. /\n5. Left shift\n6. Right shift\n");
    scanf(" %d", &choose);
    
    switch(choose){
        case(1): r = a + b; printf("Result: %d\n", r); break;
        case(2): r = a - b; printf("Result: %d\n", r); break;
        case(3): r = a * b; printf("Result: %d\n", r); break;
        case(4): r = a / b; printf("Result: %d\n", r); break;
        case(5): printf("%d << 3 == %d\n", a, a << 3); break;
        case(6): printf("%d >> 3 == %d\n", a, a >> 3); break;
    }
    
    
    
    
}





