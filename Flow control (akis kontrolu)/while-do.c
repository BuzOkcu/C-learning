#include <stdio.h>
#include <conio.h>

int main(){
    int number , total = 0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        total += number;
    } while (number != 0);
    
    printf("%d" , total);

    getch();
}