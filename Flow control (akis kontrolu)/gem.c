#include <stdio.h>
#include <conio.h>
int main()
{
   int n;

   printf("Enter N value: ");
   scanf("%d",&n);

   for(int i=1; i<=n; i++)
   {
     // print space
     for(int j=i; j<=n; j++)
     {
       printf(" ");
     }
     // print star
     for(int k=1; k<=2*i-1; k++)
     {
       printf("*");
     }
     // new line
     printf("\n");
   }

   for(int i=n-1; i>=1; i--)
   {
     // print space
     for(int j=n; j>=i; j--)
     {
       printf(" ");
     }
     // print star
     for(int k=1; k<=2*i-1; k++)
     {
       printf("*");
     }
     // new line
     printf("\n");
   }
   getch();
   return 0;
}