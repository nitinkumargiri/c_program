#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));
    int numbertoguess = rand() % 100 +1;
    int numbertotries = 0;
    int guess;

    printf("welcome to number guessing game\n\n");
    printf("chose number 0 to 100 \n");

    printf("Enter yopur number: ");

    scanf("%d", &guess);
    printf("generated number is: %d\n", numbertoguess);
    if (guess < numbertoguess)
    {
        printf("too low...!\n");
    }else if (guess > numbertoguess)
    {
        printf("too height....!\n");
    
    }else{
        printf("   congratulation: you have guess the no in %d tries.\n",numbertotries);
    }
    
    return 0;
}