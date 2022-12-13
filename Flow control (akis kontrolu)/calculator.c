#include <stdio.h>
#include <conio.h>
int main(){

    int x;
    int y;
    char ab;

    printf("process: ");
    scanf("%c" , &ab);
    if (ab == '+' || ab == '-' || ab == '*' || ab == '/' )
    {

    printf("Enter a number: ");
    scanf("%d" , &x);

    printf("Enter a number: ");
    scanf("%d" , &y);
    
    if(ab == '+' )
    {
        printf("product: %d" , x + y);
    }

    else if(ab == '-' )
    {
        printf("product: %d" , x - y);
    }

    else if(ab == '*' )
    {
        printf("product: %d" , x + y);
    }

    else if(ab == '/' )
    {
        printf("product: %d" , x + y);
    }
}
    else printf("ERROR");
    
    getch();
}