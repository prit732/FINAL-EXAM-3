#include <stdio.h>

int main() {
    int num, i,f = 1;
      
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf(" negative numbers.\n");
    } else {
        
        for (i = 1; i <= num; ++i) {
            f *= i;
        }
      
        printf("f %d : %i\n", num, f);
    }

}
