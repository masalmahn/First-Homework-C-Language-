#include <stdio.h>

int main() {
    int num=0,counter=0;
    printf("Please Enter Number To Calculate the digits: ");
    scanf("%d",&num);
    int tmp = num;
    while (tmp>0) {
        tmp /=10;
        counter++;
    }
    printf("In the Number %d you have %d digits",num,counter);
    return 0;
}
