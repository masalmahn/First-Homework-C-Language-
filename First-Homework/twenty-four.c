#include <stdio.h>

int main() {
    long num,showNum;
    int count=0,digit,temp=0;
    printf("Please Enter Your Number: ");
    scanf("%ld",&num);
    showNum = num;
    printf("Please Enter The Digit you Want To count: ");
    scanf("%d",&digit);
    while (num>0) {
        temp = num%10;
        if (temp == digit) {
            count++;
            num = num/10;
        } else num = num/10;
    }
    printf("You Have %d Digits from %d in %ld",count,digit,showNum);
    return 0;
}
