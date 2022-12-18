#include <stdio.h>
#include <conio.h>

int main(){

    int a , total = 0;

    do
    {
       printf("Enter a number: ");
       scanf("%d" , &a);
       total += a;
       if (a == 0)
       {
        goto git;
       }
    } while (1);
    git: 
        printf("%d" , total);

    getch();
}