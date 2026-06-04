#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, remainder;
    int digits, sum;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers are:\n");

    for (num = start; num <= end; num++) {
        digits = 0;
        sum = 0;
        temp = num;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        while (temp != 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}