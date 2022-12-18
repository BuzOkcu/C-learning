#include <stdio.h>
#include <conio.h>

int main(){

    int durum;
    int bakiye = 5000;
    int yatPara;
    int cekPara;

    do
    {
       printf("\n");
       printf("1. Bakiye Kontrol\n");
       printf("2. Para Yatirma\n");
       printf("3. Para Cekme\n");
       printf("4. Cikis\n");
       printf("Ne yapmak istiyorsunuz? : \n");
       scanf("%d" , &durum);
       switch (durum)
       {
       case 1 :
          printf ("Mevcut Bakiyeniz : %d" , bakiye);
        break;
       case 2 :
          printf("Yatirilicak Miktar : ");
          scanf("%d" , &yatPara);
          bakiye += yatPara;
          break;
          case 3 :
          printf("Cekilecek Miktar : ");
          scanf("%d" , &cekPara);
          if (cekPara >= bakiye)
          {
            bakiye -= cekPara;
          }
          else
          {
            printf ("Yetersiz Bakiye.");
          }
          
          
          break;
       default:
        break;
       }
    } while (durum != 4);
    printf("Iyi Gunler!!!");
    
    getch();
}