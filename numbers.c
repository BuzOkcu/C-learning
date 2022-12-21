#include <stdio.h>
#include <conio.h>

int main(){
    
    int a;
    
    printf("Bir sayi giriniz: ");
    scanf("%d" , &a);
    
    for(int i=0; i <= a; i++)
    {
        printf("sayi: %d\n" , i);
    }
    getch();
}