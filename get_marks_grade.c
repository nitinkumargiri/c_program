#include <stdio.h>
int main (){
    int mark;
    printf("=== WELCOME ===\n");
    printf("enter your number : ");
    scanf("%d",&mark);

    if (mark <= 100 && mark >= 80)
    {
        printf("first ");
        
    }else if (mark < 80 && mark >= 60)
    {
        printf("second ");
        
    }else if (mark < 60 && mark >=30)
    {
        printf("third");
        
    }else{
        printf("Invailed input...");
    }
    return 0;

}