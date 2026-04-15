#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;

    char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    printf("Enter password length: ");
    scanf("%d", &length);

    srand(time(0));

    printf("Generated Password: ");

    for(int i = 0; i < length; i++) {
        printf("%c", chars[rand() % (sizeof(chars) - 1)]);
    }

    return 0;
}
