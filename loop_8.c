//Count Digits

#include <stdio.h>

int main() {
    int n, count;

    scanf("%d", &n);

    count = 0;

    while(n > 0) {
        count = count + 1;
        n = n / 10;
    }

    printf("%d", count);

    return 0;
}