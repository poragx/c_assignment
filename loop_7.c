//prime number
#include <stdio.h>

int main() {
    int n, i, count;

    scanf("%d", &n);

    count = 0;
    i = 1;

    while(i <= n) {
        if(n % i == 0) {
            count = count + 1;
        }
        i = i + 1;
    }

    if(count == 2) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}