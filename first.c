// #include <stdio.h>
// int main(){
//     int a = 10;
//     int b =20;
//     printf("%d \n%d",a,b);
//     printf ("hello world");
//     printf("\nhi how are you");
//     printf("\nmy name is abhi");
//     printf("hi klumar");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char character[] = "abcdefghijkimnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
    int length, i;
    char password  [100];

    printf("enter your number: ");
    scanf("%d", &length);

    //generate random number.
    srand(time(0));
    for ( i = 0; i < length; i++)
    {
        int index = rand() % (sizeof(character) - 1);
        password[i] = character[index]; 
        
    }
    password[length] = '\0';
    printf("the generated password is : %s",password);

    return 0;
    
}