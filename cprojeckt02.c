#include <stdio.h>
#include <conio.h>
int main(){
    char name[40];
    char surname[80];
    printf("Name : ");
    scanf("%s" , &name);
    printf("Surname : ");
    scanf("%s" , &surname);

    printf("Name & Surname : %s %s" , name , surname);
    getch();
}