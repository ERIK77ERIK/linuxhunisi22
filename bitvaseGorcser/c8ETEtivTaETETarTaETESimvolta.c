#include <stdio.h>

int main() {
    char symbol;
    printf("Please type some symbol: ");
    scanf(" %c", &symbol);

    if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z')) {

        printf("You typed a letter\n");

    } else if (symbol >= '0' && symbol <= '9') {

        printf("You typed a number\n");

    } else {

        printf("You typed a symbol\n");

    }
    return 0;
}









