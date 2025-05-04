#include<stdio.h>
int main()
{

    int n; 
    int row=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1 ;j<=row;j++)
        {
            printf("*");
        }
        printf("\n");
        row++;

    }


    return 0;
}