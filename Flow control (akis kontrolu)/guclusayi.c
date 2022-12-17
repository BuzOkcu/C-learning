#include <stdio.h>
#include <conio.h>

int main(){
    
    int sayi , gecSayi , kalan , fact , toplam = 0;

    printf("Bir sayi giriniz: ");
    scanf("%d" , &sayi);

    gecSayi = sayi;

     while (sayi != 0)
     {
        fact = 1;
        kalan = sayi % 10;
        for (int i = 1; i <= kalan; i++)
        {
            fact *= i;
        }
        toplam += fact;
        sayi /= 10;
     }
    if (toplam == gecSayi)
    {
       printf("%d sayi guclu bir sayi" , gecSayi);
    }
    else printf("%d sayisi guclu bir sayi degildir" , gecSayi);
     
     getch();
}