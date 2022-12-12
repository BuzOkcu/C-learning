#include <stdio.h>
#include <conio.h>
int main(){

    int divider;
    int divisor;
    int quotient;
    int remainder;

    printf("Enter a number: ");
    scanf("%d" , &divider);

    printf("Enter a number: ");
    scanf("%d" , &divisor);

    quotient = divider / divisor;
    remainder = divider % divisor;

    printf("%d\n" , quotient);
    printf("%d" , remainder);

    getch();
}