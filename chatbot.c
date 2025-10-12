#include <stdio.h>
#include <string.h>
int main (){
    char input [100];

    printf ("WELCOM TO CHATBOT..How Can I Help You! Today!.\n\n");

    while (1)
    {
        printf("you: ");
        fgets(input, sizeof(input), stdin);

        //remove new line character from input
        input[strcspn(input,"\n")] = 0;

        if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0)
        {
            printf("Good bye ..\n");
            break;
            /* code */
        }else if (strstr(input, "hi") != NULL ||strstr(input, "hello") != NULL)
        {
            printf("chatbot hi  there! what can i do for you?\n");
            /* code */
        }else if (strstr(input, "how are you") != NULL || strstr(input, "whats up") != NULL){
            printf("CHATYBOT: I am fine! have a great day?!..");
        }
        else{
            printf("chatbot: i'm not sure how to respond to that.\n");
        }
        return 0;
        
        
    }
    
    
}