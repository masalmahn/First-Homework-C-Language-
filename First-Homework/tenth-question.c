#include <stdio.h>

int main() {
    int a,b,c ;
    printf("please enter the first number: ");
    scanf("%d",&a);
    printf("please the second number: ");
    scanf("%d",&b);
    printf("please enter the third number: ");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("the largest number is %d",a);
    } else if(b>c) {
            printf("the largest number is %d",b);
    } else printf("the largest number is %d",c);

    return 0;
}

