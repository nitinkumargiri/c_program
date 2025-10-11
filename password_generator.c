#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char charecter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int length, i;
    char password[100];

    printf("Enter password length: ");
    scanf("%d",length);

    //Generate random number.

    srand(time(0));
    for ( i = 0; i < length; i++)
    {
        int index = rand() % (sizeof(charecter) - 1);
        password[i] = charecter;
        
    }
    //end an string.
    password[length] = '\0';

    printf("Generate password: %s", password);

    return 0;
    

}