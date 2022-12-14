#include <stdio.h>
#include <conio.h>

int main(){

    int number1 , number2 , hcf , lcm;
     printf("Enter a number: ");
     scanf("%d" , &number1);

     printf("Enter a number: ");
     scanf("%d" , &number2);

     for (int i = 1; i <= number1 & i <= number2; i++)
     {
        hcf = i;
     }
     printf("hfc : %d\n" , hcf);
     lcm = (number1 * number2) / hcf;
     printf("lcm : %d" , lcm);

     getch();
}