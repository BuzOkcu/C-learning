#include <stdio.h>
#include <conio.h>
int main(){

    int x;
    int y;
    int z;
    int note;

    printf("Enter first note: ");
    scanf("%d" , &x);

    printf("Enter second note: ");
    scanf("%d" , &y);

    printf("Enter third note: ");
    scanf("%d" , &z);

    note = (x + y + z) / 3;

     if (note >= 50 & note <= 100)
     {
       printf("SUCCESSFUL\n");
       printf("Note: ");
       printf("%d" , note);
     }
     else if (note > 100)
     {printf("wrong note entered");
     }
     else
     {
        printf("UNSUCCESSFUL\n");
        printf("Note: ");
        printf("%d" , note);
     }
     getch();

}