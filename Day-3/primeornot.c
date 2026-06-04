#include <stdio.h>

int main() {
    int n, i, count = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

      if (n <= 1)
        count = 0;
      else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                count = 0;
                break;
            }
        }
    }

    if (count)
        printf("%d is a Prime Number", n);
    else
        printf("%d is Not a Prime Number", n);

    return 0;
}