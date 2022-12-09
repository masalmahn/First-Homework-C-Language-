#include <stdio.h>

int main() {
    int f,c=0;
    printf("Please Enter The Feet Length: ");
    scanf("%d",&f);
    c= f * 30.48;
    printf("Your Feet Length %d is Equal to %d Centimeters",f,c);
    return 0;
}
