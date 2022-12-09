#include <stdio.h>

int main() {
    int multiplyNum=0,counter=0;
    printf("Please Enter Number: ");
    scanf("%d",&multiplyNum);
    while (counter<=10) {
        printf("%d * %d = %d \n",counter,multiplyNum,counter*multiplyNum);
        counter++;
    }
    return 0;
}
