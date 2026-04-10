//Sum of first N numbers

#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum = %d", sum);
}