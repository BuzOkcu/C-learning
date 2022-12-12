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
    printf("quotient: \t");
    printf("%d\n" , quotient);
    remainder = divider % divisor;
    printf("remainder: \t");
    printf("%d\n" , remainder);

    getch();
}