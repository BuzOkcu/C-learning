#include <stdio.h>
#include <conio.h>

int main(){
    int max[10];
    int n;
    int toplam = 0;
    int ortalama;

    printf("Enter a number of structure: ");
    scanf("%d" , &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d Enter a number: " , i);
        scanf("%d" , &max[i]);
        toplam += max[i];
    }
    ortalama = toplam / n;
    printf("Ortalama = %d" , ortalama);

    getch();
    return 0;
}