#include <stdio.h>

int main() {
    int temp;
    printf("please Enter The Temperature: ");
    scanf("%d",&temp);
    if (temp > 0) {
        printf("The Temperature is Above the Freezing Point.");
    } else {
        printf("The Temperature is Below the Freezing Point.");
    }
    return 0;
}
