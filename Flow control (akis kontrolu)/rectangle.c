#include <stdio.h>
#include <conio.h>

int main(){

    int x , y;

    printf("Enter a number: ");
    scanf("%d" , &x);

    printf("Enter a number: ");
    scanf("%d" , &y);

    for (int i = 1; i <= x; i++)
    {
        for (int v = 1; v <= y; v++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    getch();
}