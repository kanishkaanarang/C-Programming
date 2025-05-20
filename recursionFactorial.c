#include <stdio.h>

int fact(int n){
    if (n==0||n==1){
        return 1;
    }
    else{
    return n * fact(n-1);
    }
}

int main(){
    int num;
    printf ("enter a number : ");
    scanf("%d",&num);
    if(num<0){
        printf("factorial does not exist for -ve number");
    }
    else{
        int factorial = fact(num);
        printf("factorial of the num %d is %d",num,factorial);
    }
    return 0;
}