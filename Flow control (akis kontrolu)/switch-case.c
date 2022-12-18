#include <stdio.h>
#include <conio.h>

int main(){

    int number1 , number2;
    char op;
    
    printf("Enter an addition: ");
    scanf("%c" , &op);

    printf("Enter first number: ");
    scanf("%d" , &number1);

    printf("Enter second number: ");
    scanf("%d" , &number2);

    switch (op)
    {
    case '+' :
        printf("Result: %d" , number1 + number2);
        break;
    case '-' :
        printf("Result: %d" ,number1 - number2);
        break;
    case '*' :
        printf("Result: %d" , number1 * number2);
        break;
    case '/' :
        printf("Result: %d" , number1 / number2);
        break;
    default:
        printf("FAİLD");
        break;
    }

    getch();
}