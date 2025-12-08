#include <stdio.h>
int main (){
    int n;
    printf("enter your value : ");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
        for (int  j = 1; j<n; j++)
        {
            if (i==1||i==n||j==1||j==n||i==j||j+i==n+1)
            {
                printf("* ");
                /* code */
            }else{
                printf("  ");
            }
            
            /* code */
        }
        printf("\n");
        
        /* code */
    }
    return 0;
    

}
