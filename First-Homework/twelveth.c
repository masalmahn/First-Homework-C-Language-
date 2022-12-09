#include <stdio.h>

int main() {
    int high=0,low=0,step=1,counter=0;
    printf("Please Enter The Minimum Number: ");
    scanf("%d",&low);
    printf("Please Enter The Maximum Number: ");
    scanf("%d",&high);
    while (low <= high) {
        printf("%d \n",low);
        low++;
        counter++;
    }
    printf("the Count Of the numbers are: %d",counter);
    return 0;
}
