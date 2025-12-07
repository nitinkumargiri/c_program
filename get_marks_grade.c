#include <stdio.h>
int main (){
    int mark;
    printf("enter your number : ");
    scanf("%d",&mark);

    if (mark <= 100 && mark >= 80)
    {
        printf("first ");
        /* code */
    }else if (mark < 80 && mark >= 60)
    {
        printf("second ");
        /* code */
    }else if (mark < 60 && mark >=30)
    {
        printf("third");
        /* code */
    }else{
        printf("Invailed input...");
    }
    return 0;

}