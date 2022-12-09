#include <stdio.h>

int main() {
    int n=0;
    printf("Please Enter Number: ");
    scanf("%d",&n);
    if (n>0) {
        while (n>= 1) {
            printf("%d \n",n);
            n--;
        }
    } else {
        printf("! Please Enter Natural Number !");
    }
    return 0;
}
