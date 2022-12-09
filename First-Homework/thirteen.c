#include <stdio.h>

int main() {
    int mainNum=6,counter=0;
    while (counter<=10) {
        printf("%d * %d = %d \n",counter,mainNum,counter*mainNum);
        counter++;
    }
    return 0;
}
