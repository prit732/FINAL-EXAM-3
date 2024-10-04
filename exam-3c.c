#include <stdio.h>

int main(){
    int rows;

    printf("enter the number rows: ");
    scanf("%d", &rows);

    
    for (int i = 0; i < rows; i++){
     
        for (int j = 5; j > i; j--){
            printf("%d ", j);
        }
        printf("\n");
    }

    
}
