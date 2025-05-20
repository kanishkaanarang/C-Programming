#include <stdio.h>

int main() {
    int arr[100], n, i, flag = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");

    return 0;
}
