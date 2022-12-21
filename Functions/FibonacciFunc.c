#include <stdio.h>
#include <conio.h>

int fibo(int n){

    if (n <= 0)
    {
        return n;
    }
    else return fibo(n - 1) + fibo(n - 2);
}
int main(){

    int n;

    printf("Bir sayi giriniz: ");
    scanf("%d" , &n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t" , -fibo(i));
    }

    return 0;
    getch();
}