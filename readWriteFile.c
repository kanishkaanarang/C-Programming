#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Write to file
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fprintf(fp, "Hello, this is MAIT!");
    fclose(fp);

    // Read from file
    fp = fopen("test.txt", "r");
    fgets(str, 100, fp);
    printf("Content of file: %s\n", str);
    fclose(fp);

    return 0;
}
