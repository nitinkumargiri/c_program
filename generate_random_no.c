//generate a random number fron 0 to 100 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;
}
 int main(){
    // srand(time(NULL));
     printf("YOUR number 0 to 100 is %d\n\n",generaterandomnumber(100));

     // second type to generate random number.
     srand(time(0));
     int randomnumber = rand() % 100;
     printf("your generated random number is: %d",randomnumber);
     return 0;
    }