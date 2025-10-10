#include <stdio.h>
int main(){
    
    // Temperature mesure in celcius to fehrenheit.

    int celcius , fehrenheit;
    printf("Enter the temperature to celcius: ");
    scanf("%d",&celcius);
    float find = (celcius * 9/5) + 32;
    printf("the temperature in fahrenheit is: %f\n\n",find);

    // temprature in fehrenheit to celcius.

    printf("Enter the temperature in fehrenheit: ");
    scanf("%d",&fehrenheit);
    float temp = 5/9 * (fehrenheit - 32);
    printf("The temperature in celcius is : %f", temp);

    return 0;
}