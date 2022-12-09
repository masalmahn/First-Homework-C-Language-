#include <stdio.h>

int main()
{
    int num1, num2,hcf=0, min;

    printf("Please Enter The First Number: ");
    scanf("%d",&num1);
    printf("Please Enter The Second Number: ");
    scanf("%d",&num2);

    if (num1<num2) {
        min = num1;
    } else min = num2;

    for (int i=1; i<=min; i++) {
        if (num1%i==0 && num2%i==0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}
