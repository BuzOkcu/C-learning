#include <stdio.h>
#include <conio.h>

int main(){

    int number, total = 0;
    printf("Enter a number: ");
    scanf("%d" , &number);
    while (number > 0)
    {
        total = total + number;
        number--;
    }
    printf("factorial: %d" , total);
    

    getch();
}