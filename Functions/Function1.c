#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int Total(int x, int y); // func. prototpe

int main(){

    int x;
    int y;
    int total;
    printf("Enter first number: ");
    scanf("%d" , &x);

    printf("Enter second number: ");
    scanf("%d" , &y);
    total = Total(x,y); // call func.
    printf("Total: %d" , total);
    getch();
    return 0;
}
int Total(int x , int y){ //int a func. 
     total = x + y;
     return total;
}