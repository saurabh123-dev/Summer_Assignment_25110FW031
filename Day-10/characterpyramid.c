#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {

        // Print spaces
        for(j = 1; j <= 5 - i; j++)
            printf(" ");

        // Print A to current character
        for(j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);

        // Print current character-1 back to A
        for(j = i - 1; j >= 1; j--)
            printf("%c", 'A' + j - 1);

        printf("\n");
    }

    return 0;
}