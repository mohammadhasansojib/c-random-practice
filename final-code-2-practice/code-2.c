#include <stdio.h>
#include <string.h>

void rm_space(char *str) {
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    rm_space(str);

    printf("String after removing white spaces: %s\n", str);

    return 0;
}
