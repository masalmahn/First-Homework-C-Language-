#include <stdio.h>

int main() {
    int num=1,counter=1,total=1;
    printf("Please Enter Number: ");
    scanf("%d",&num);
    counter=num;
    while (counter>0) {
        total*=counter;
        counter--;
    }
    printf("The Factorial of %d Is %d",num,total);
    return 0;
}
