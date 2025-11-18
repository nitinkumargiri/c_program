#include <stdio.h>
int main(){
    int a , b;
    char operator;
    printf("enter ypur choice (+,-,*,/): ");
    scanf("%c", &operator);
    printf("enter your number : ");
    scanf("%d",&a);
    printf("enter your second no : ");
    scanf("%d", &b);

    if (operator == '+')
    {
        printf("%d",a+b);
    }
    else if (operator == '-')
    {
        printf("%d",a-b);
        
    }
    else if (operator == '*')
    {
        printf("%d",a * b);
        
    }
    else if (operator == '/')
    {
        printf("%d", a/b);
        
    }
    else{
        printf("invailed operator");
    }
    return 0;
    
    
    
}