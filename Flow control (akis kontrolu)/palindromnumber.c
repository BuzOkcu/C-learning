#include <stdio.h>
#include <conio.h>

int main(){
    
    int sayi , gecSayi , toplam = 0;
    int kalan;

    printf("Bir sayi giriniz: ");
    scanf("%d" , &sayi);

    gecSayi = sayi;
     while (sayi != 0)
     {
        kalan = sayi % 10;
        toplam = toplam * 10 + kalan;
        sayi /= 10;
     }
    if (toplam == gecSayi)
    {
       printf("%d sayisi polindromdur" , gecSayi);
    }
    else ("%d sayisi polindrom sayi degildir" , gecSayi);
     
     getch();
}