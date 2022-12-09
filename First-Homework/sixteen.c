#include <stdio.h>

int main() {
    int min=1000,max=2000,sum=0;
    while (min <= max) {
        if (min%2==0) {
            sum+=min;
            printf("%d",min);
            min++;
        } else min++;
    }
    printf("\nThe Sum Of The Even Numbers is: %d",sum);
    return 0;
}
