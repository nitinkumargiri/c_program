#include <stdio.h>
int main (){
    //take  two input from user after we will substract
    printf("FOR SUBSTRACT VALUE..\n\n");
    int num1 ,num2 ,sub;
    printf ("enter your first number: ");
    scanf("%d",&num1);
    printf("enter your second number: ");
    scanf("%d", &num2);
    sub = num1 - num2;
    printf("YOUR RESULT : %d\n\n",sub);

    //take two input  from user after we will add. 
    printf("FOR ADD VALUE..\n\n");
    int num0, num9, sum;
    printf("enter your first number: ");
    scanf("%d",&num0);
    printf("enter your second number: ");
    scanf("%d",&num9);

    //now we will sum num1 + num2
    sum = num0 + num9;
    printf("the sum of  your number is %d",sum);
    
    return 0;
}