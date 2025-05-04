#include<stdio.h>
int main()
{

   int n;
   scanf("%d",&n);
   int row=1;
   int space = n-1;
   for(int i=1; i<=n;i++)
   {
    for(int s=1;s<=space;s++)
    {
        printf(" ");
    }
    

    for(int j=1;j<=row;j++)
    {
        printf("*");
    }
    printf("\n");
    row +=2;
    space--;

   }

    return 0;
}