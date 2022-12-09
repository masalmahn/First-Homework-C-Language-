#include <stdio.h>

int main() {
    int num=0,sum=0,temp=0,r;
    printf("Please Enter any Number: ");
    scanf("%d",&num);
    temp= num;
    while (num>0) {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if (temp==sum) {
        printf("%d Is Palindrome",temp);
    } else printf("%d Isn't Palindrome",temp);

    return 0;
}
