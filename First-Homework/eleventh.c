#include <stdio.h>

int main() {
    int num=0,sum=0,counter=1,product=1;
    while (counter<= 10) {
        printf("Please Enter The %d number: ",counter);
        scanf("%d",&num);
        sum += num;
        product *= num;
        counter++;
    }
    printf("The sum is %d and the product is %d",sum,product);
    return 0;
}
