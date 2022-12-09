#include <stdio.h>

int main() {
    int x;
    printf("please Enter The Number: ");
    scanf("%d",&x);
    if (x%2 == 0) {
        printf("Your Number Is Even");
    } else {
        printf("Your Number Is Odd");
    }
    return 0;
}
