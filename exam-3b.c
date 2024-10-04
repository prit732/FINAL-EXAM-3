#include <stdio.h>

int main(){
      
    int even = 0, odd = 0,number;

    
    printf("Enter a number: ");
    scanf("%lld", &number);

  
    while (number != 0){
        int digit = number;  

        if (digit % 2 == 0){
            even++; 
        } else {
            odd++;   
        }

        number /= 10; 
    }

    printf("even: %d odd: %d\n", even, odd);

  
}
