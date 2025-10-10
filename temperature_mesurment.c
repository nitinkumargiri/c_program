#include <stdio.h>
int main(){
    
    // Temperature mesure in celcius to fehrenheit.

    int temperature;
    printf("Enter to temperature to celcius: ");
    scanf("%d",temperature);
    float find = (temperature * 9/5) + 32;
    printf("the temperature in fahrenheit is: %f",find);

    return 0;
}