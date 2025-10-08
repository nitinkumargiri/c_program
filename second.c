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
     printf("YOUR number 0 to 100 is %d\n",generaterandomnumber(2));
     return 0;
    }