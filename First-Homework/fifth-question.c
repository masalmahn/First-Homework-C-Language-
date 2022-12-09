#include <stdio.h>

int main() {
    int f,c=0;
    printf("Please Enter The Temperature Fahrenheit: ");
    scanf("%d",&f);
    c= (f-32)/(1.8000);
    printf("Your Fahrenheit Temperature %d is Equal to %d Celsius",f,c);
    return 0;
}
