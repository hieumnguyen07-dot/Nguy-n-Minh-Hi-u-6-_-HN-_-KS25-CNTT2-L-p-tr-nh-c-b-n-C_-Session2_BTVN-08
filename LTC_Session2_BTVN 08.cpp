#include <stdio.h>

int main() {
    int number = 12345;
    int reverse;
    int d1, d2, d3, d4, d5; 
    d1 = number % 10;        
    number = number / 10;    
    number = number / 10;    
    d4 = number % 10;        
    number = number / 10;   
    d5 = number % 10;        
    reverse = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("So dao nguoc la: %d\n", reverse);

    return 0;
}
