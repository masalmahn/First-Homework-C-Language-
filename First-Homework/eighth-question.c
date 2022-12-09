#include <stdio.h>

int main() {
    int low,high,sum=0;
    printf("Please Enter The Low Number: ");
    scanf("%d",&low);
    printf("Please Enter The High Number: ");
    scanf("%d",&high);
    while (low <= high) {
        sum += low;
        low++;
    }
    printf("%d",sum);
    return 0;
}

