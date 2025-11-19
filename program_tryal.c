
#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter your number : ");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 5/9) + 32;
    printf("%.2f celscius = %.2f fahrenheit\n",celsius,fahrenheit);

    printf("enter your no : ");
    scanf("%f", fahrenheit);

    celsius = (fahrenheit* 5/9) + 90;
    printf("%.2f fahrenheit = %.2f celscius",celsius,fahrenheit);

    return 0;


}
    