#include <stdio.h>

int main(){
    int num;
    int fact = 1;
    printf ("enter an integer : ");
    scanf("%d",&num);
    if (num < 0){
        printf("Factorial is not defined for negative numbers.\n");
    }
    else{
        for(int i =1; i<=num;i++){
            fact=fact*i;
        }
    }
    printf("factorial of number %d is %d", num,fact);
    return 0;
}