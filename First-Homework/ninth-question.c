#include <stdio.h>

int main() {
    int low,high,num;
    printf("Please Enter The Low Number: ");
    scanf("%d",&low);
    printf("Please Enter The High Number: ");
    scanf("%d",&high);
    printf("Please Enter The Divide Number: ");
    scanf("%d",&num);
    while (low <= high) {
        if (low%num==0) {
            printf("%d \n",low);
        }
        low++;
    }
    return 0;
}

