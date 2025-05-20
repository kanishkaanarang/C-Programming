#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);  // Move n-1 disks to auxiliary
    printf("Move disk %d from %c to %c\n", n, source, destination);  // Move nth disk to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);  // Move n-1 disks to destination
}

int main() {
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("\nThe sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'B', 'C');  // A = Source, B = Auxiliary, C = Destination

    return 0;
}
