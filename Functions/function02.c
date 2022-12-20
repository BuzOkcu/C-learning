#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Toplam(int a){

    if (a == 0)

    {
        return 0;
    }
    else
    {
        return a + Toplam(a - 1);
    }
    
}
int main(){

    int a;
    int toplam;
    printf("Bir sayi girin: ");
    scanf("%d" , &a);
    toplam = Toplam(a);
    printf("%d" , toplam);
    getch();
    return 0;
}