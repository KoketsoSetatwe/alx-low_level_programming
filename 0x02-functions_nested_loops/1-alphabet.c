#include <stdio.h>

int main() {
    char c;

    printf("English Alphabets: \n");

    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c ", c);
    }

    printf("\n");

    for (c = 'a'; c <= 'z'; c++) {
        printf("%c ", c);
    }

    return 0;
}
