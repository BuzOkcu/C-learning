#include <stdio.h>
#include <conio.h>

int main(){

    int t1 = 0;
    int t2 = 1;
    int siradakiTerim;
    int n;
    
    printf("Bir sayi girin: ");
    scanf("%d" , &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d\t" , t1);
        siradakiTerim = t1 + t2;
        t1 = t2;
        t2 = siradakiTerim;
    }
    
    return 0;
    getch();
}