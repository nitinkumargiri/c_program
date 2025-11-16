#include <stdio.h>
int main(){
    int num, i, flag = 0;
    printf("enter your number ");
    scanf("%d",&num);

    if (num <= 1)
    {
        printf("NOt a  prime number");
    }

    for (int i = 2; i < num; i++)
    {
        if (num %i == 0)
        {
            flag = 1;
            break;
        }
        
    }if (flag == 0)
    {
        printf("prime number");

    }else{
        printf("not a prime number");
    }

    return 0;
    
    
    

}