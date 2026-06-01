#include <stdio.h>
    int main() {
    int n, sum = 0;

    printf("Enter number upto which you want to sum: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum= sum+i ;
    }

    printf("Sum = %d", sum);

    return 0;
}