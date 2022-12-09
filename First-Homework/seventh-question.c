#include <stdio.h>

int main() {
    int x=1,i=1,square=0;
    while (i<=10) {
        square = x*x;
        printf("%d \n",square);
        i++;
        x++;
    }
    return 0;
}
