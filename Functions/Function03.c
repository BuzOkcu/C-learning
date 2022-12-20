#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int toplam = 0;

int Basamak(int a){

    if (a != 0)

    {
        toplam += (a%10);
        Basamak(a/10);
    }
   return toplam;
    
}

int main(){

    int a;
    printf("Bir sayi girin: ");
    scanf("%d" , &a);
    printf("Toplam: %d" , Basamak(a));
    getch();
    return 0;
}