#include <stdio.h>
#include <conio.h>
int main(){
    int x;
    int y;
    printf("Enter a number: ");
    scanf("%d" , &y);
    x = y % 2;
    printf("%d" , x);
    getch();
}