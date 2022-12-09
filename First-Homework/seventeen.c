#include <stdio.h>

int main() {
    float n=1,sum=0;
    printf("Please Enter Number: ");
    scanf("%f",&n);
    while (n>0) {
        sum= sum + 1/n;
        n--;
    }
    printf("%.3f",sum);
    return 0;
}
