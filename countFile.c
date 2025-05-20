#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0, words = 0, chars = 0;

    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File can't be opened.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ' || ch == '\n')
            words++;
        if (ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", lines, words + 1, chars);
    return 0;
}
