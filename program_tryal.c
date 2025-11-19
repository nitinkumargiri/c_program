
#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("enter your number : ");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 5/9) + 32;
    printf("%.2f celscius = %.2f fahrenheit\n",celsius,fahrenheit);

    printf("enter your no : ");

    return 0;


}
    