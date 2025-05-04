#include<stdio.h>
int main()
{   

    

// partan print sytem 
                    // *****
                    // ****
                    // ***
                    // **
                    // *
    int n; 
    int row=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=row;j--)
        {
            printf("*");
        }
        printf("\n");
        row++;

    }

   

    return 0;
}