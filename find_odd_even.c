#include <stdio.h>
int main(){

    // Finding a odd even number in this program.

    int number;
    printf("Enter your number : ");
    scanf("%d", &number);
    if (number %2 == 0){
        
        printf("Your number is even...\n\n");

    }else{
        printf("Yoyr number is odd ....\n\n");
    }


    printf("Enter your number : ");
    scanf("%d", &number);

    if (number %2 == 0){

        printf("Your number is even...");

    }else{
        printf("Yoyr number is odd ....");
    }


    return  0;

    
}