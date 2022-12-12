#include <stdio.h>
#include <conio.h>
int main(){
    const int x = 10;
    const int y = 40;
    int z;

    z = x + y;
    printf("%d\n" , z);

    z = x * y;
    printf("%d\n" , z);

    z = x - y;
    printf("%d\n" , z);

    z = y % x ;
    printf("%d\n" , z);

    getch();

}