#include <stdio.h>
#include <conio.h>

int main(){

    int number , total = 1;

  printf("Enter a number: ");
  scanf("%d" , &number);

  for (int i = 1; i <= number; i++) 
  {
    total *= i;
  }
  printf("product: %d" , total);

  getch();
}