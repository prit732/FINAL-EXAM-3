#include <stdio.h>

int main(){
    int num, sum;

    printf("Enter a num : ");
    scanf("%d", &num);

    if (num < 0){
        printf("enter the num : \n");

    }

    while (num > 0){
        sum += num % 10; 
        num /= 10;    
    }

    printf("total num: %d\n", sum);

}
