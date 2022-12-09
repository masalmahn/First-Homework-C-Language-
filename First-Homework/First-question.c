#include <stdio.h>

int main() {
    int a,b,c=0;
    printf("Enter The First Number: ");
    scanf("%d",&a);
    printf("Enter The Second Number: ");
    scanf("%d",&b);
    c = a + b;
    printf("The Sum Of The %d And %d Number: %d",a,b,c);
    return 0;
}
