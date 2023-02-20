#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not considered prime numbers
    if (num == 0 || num == 1) {
        printf("NOT PRIME");
    }
    else {
        for (i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            printf("PRIME");
        }
        else {
            printf("NOT PRIME");
        }
    }
    return 0;
}
