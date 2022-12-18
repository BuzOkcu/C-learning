#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Text();

int main(){

    Text(10,20,32);
    getch();
}
void Text(int a , int b, int c){
    printf("Total : %d" , a + b + c);
}