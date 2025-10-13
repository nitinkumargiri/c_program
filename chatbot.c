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
            
        }else if (strstr(input, "hi") != NULL ||strstr(input, "hello") != NULL)
        {
            printf("chatbot hi  there! what can i do for you?\n");
            
        }if (strstr(input, "where are you from") != NULL || strstr(input, "which state do you leave") != NULL)
        {
            printf(" chatbot: I am belong from pachrukhi ,siwan (bihar)! how can i help you! ?.\n");
        
        }
        
        else if (strstr(input, "how are you") != NULL || strstr(input, "whats up") !=  NULL || strstr (input, "whats going on") != NULL){
            printf("CHATYBOT: I am GODD! have a great day?!..\n");
        }if (strstr(input, "how was your day today") != NULL || strstr(input, "whats going on today") != NULL 
        || strstr(input, "how was your day") != NULL)
        {
            printf("everything was good!..and how  was your day today ?\n");
            /* code */
        }else if (strstr(input, "who is your woner") != NULL || strstr(input, "who is invent you") != NULL
    || strstr(input, "who is make you") != NULL){
        printf("Nobody is my ower!...Better luck next time...! \n");
    }if (strstr(input, "what can you do") != NULL || strstr(input, "what can you do for me") != NULL)
    {
        printf("yes! I can clear your dought! solve problem! I will try to do everything fore you!\n");

    }else if (strstr(input, "your name") != NULL || strstr(input, "what is your name") != NULL
||strstr(input, "whats your name") != NULL)
    {
        printf("chatbot: my name is chatbot! how can i help you!");
    }if (strstr(input, "what is your favourite food") != NULL || strstr(input, "whats your favourite food") != NULL
|| strstr(input, "whats your favruits dish") != NULL)
    {
        printf("chatbot: for your kind information! I can not eat anything");
        /* code */
    }
    
    
    
                
        else{
            printf("chatbot: i'm not sure how to respond to that.\n");
        }
        
        return 0;
        
    }
    
    
}