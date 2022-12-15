#include <stdio.h>
#include <conio.h>

int main(){

    int number, fact = 1;
    printf("Enter a number: ");
    scanf("%d" , &number);
    while (number > 1)
    {
        fact = fact * number;
        number--;
    }
    printf("factorial: %d" , fact);
    

    getch();
}