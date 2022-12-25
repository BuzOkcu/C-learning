#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Menu();
void Kasa(int bakiye);
int Paracekme(int bakiye);
int Parayatirma(int bakiye);
int main(){
    int secenek;
    int bakiye = 5375;

    do
    {
        Menu();
        scanf("%d" , &secenek);
        switch (secenek)
        {
        case 1:
            Kasa(bakiye);
            break;
        case 2:
            bakiye = Paracekme(bakiye);
            break;
        case 3:
            bakiye = Parayatirma(bakiye);
            break;
        }
    } while (secenek != 4);
    printf("Iyi Gunler!!!");

    getch();
    return 0;
}
void Menu(){
    printf("\n");
    printf("1. Kasayi goster\n");
    printf("2. Para Cekme\n");
    printf("3. Para Yatirma\n");
    printf("4. Cikis\n");
}
void Kasa(int bakiye){
    int banknot;
    printf("\n");
    printf("Mevcut bakiye : %d\n" , bakiye);
    printf("Kasanin Durumu :\n");
    banknot = bakiye / 100;
    printf("100'luk banknot sayisi : %d\n" , banknot);
    bakiye -= banknot * 100;

     banknot = bakiye / 50;
    printf("50'lik banknot sayisi : %d\n" , banknot);
    bakiye -= banknot * 50;
    
     banknot = bakiye / 20;
    printf("20'lik banknot sayisi : %d\n" , banknot);
    bakiye -= banknot * 20;
    
     banknot = bakiye / 10;
    printf("10'luk banknot sayisi : %d\n" , banknot);
    bakiye -= banknot * 10;
    
     banknot = bakiye / 5;
    printf("5'lik banknot sayisi : %d\n" , banknot);
    bakiye -= banknot * 5;


}
int Paracekme(int bakiye){
    int cekPara;
    printf("Cekilecek Para Miktari : ");
    scanf("%d" , &cekPara);
    if (cekPara <= bakiye)
    {
        bakiye -= cekPara;
        printf("Yeni Bakiyeniz : %d" , bakiye);
    }
    else printf("Yetersiz Bakiye");
    return bakiye;
}
int Parayatirma(int bakiye){
    int yatPara;
    printf("Yatiralacak Para Miktari : ");
    scanf("%d" , &yatPara);

    bakiye += yatPara;
    printf("Yeni Bakiye : %d" , bakiye);
    return bakiye;

}