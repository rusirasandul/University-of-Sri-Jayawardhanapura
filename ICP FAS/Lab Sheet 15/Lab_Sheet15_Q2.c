#include <stdio.h>

void printChars(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for (char ch = ch1; ch <= ch2; ch++) {
        printf("%c ", ch);
        count++;
        if (count % numberPerLine == 0) {
            printf("\n");
        }
    }
    if (count % numberPerLine != 0) {
        printf("\n");
    }
}

int main() {
    printf("Printing characters from '1' to 'Z':\n");
    printChars('1', 'Z', 10);
    return 0;
}
