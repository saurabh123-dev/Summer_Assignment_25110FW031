#include<stdio.h>
    int main(){
    int n, prod;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {  
        prod=n*i;
        printf("%d\t", prod);
    }
     return 0;
}