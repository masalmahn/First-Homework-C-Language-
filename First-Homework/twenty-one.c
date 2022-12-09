#include <stdio.h>

int main()
{
    int n=0, first=0,last=0;
    printf("Enter any number: ");
    scanf("%d", &n);

    first = n;
    last = n % 10;

    while(first >= 10) {
        first = first / 10;
    }
    printf("%d%d%d",last,n,first);

    return 0;
}
