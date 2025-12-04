#include <stdio.h>
#include <string.h>
int main (){
    char input [100];

    printf ("WELCOM TO CHATBOT..How Can I Help You! Today!.\n\n");
    printf("=== Author __ Nitin Giri__ ===\n");

    while (1)
    {
        printf("you: ");
        fgets(input, sizeof(input), stdin);

        //remove new line character from input
        input[strcspn(input,"\n")] = 0;

        if (strcmp(input, "exit") == 0 || strcmp(input, "quit") == 0 || strcmp(input,"stop") == 0)
        {
            printf("Good bye ..\n");
            break;
            
        }else if (strstr(input, "hi") != NULL ||strstr(input, "hello") != NULL || strstr(input, "hii") != NULL)
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
|| strstr(input, "whats your favruits dish") != NULL || strstr(input, "what your favourite food") != NULL)
    {
        printf("chatbot: for your kind information! I can not eat  anything! what can i do for you?");
    }else if (strstr(input, "what is your favourite song") != NULL || strstr(input, "whats your favourite song") != NULL)
    {
        printf("every song is my favourite!  I can play any song ! How  can i help you?\n");
    }if (strstr(input, "do you like cricket") != NULL || strstr(input, "do you like any game") != NULL)
    {
        printf("I like every games! how can i help you?\n");
    }else if (strstr(input,"which cricketer do you like") != NULL || strstr(input, "who is your favourite cricketer") != NULL)
    {
        printf("virat lokhi & MS Dhoni & the hardik pandya! How can i help you tell me?\n");
    
    }if (strstr(input,"what is noun") !=NULL || strstr(input,"tell me about noun") != NULL)
    {
        printf("in a simpe way a noun is the name of person place animal or thing or any thing you can feel and touch this is called noun.\n");
    }else if (strstr(input, "what is your aim") != NULL || strstr(input, "what is your work") != NULL)
    {
        printf("my aim is get a problem and solve it! how can i help you\n");
    }if (strstr(input,"who are you") != NULL || strstr(input,"what can you does")){
        printf("i am chatbot .! ,I can solve your problem\n ");
    }if (strstr(input,"date") != NULL || strstr (input,"Date") != NULL)
    {
        printf("the date is : 27/11/2025\n How can i help you\n");
    }else if (strstr(input,"bye") != NULL || strstr(input,"see you") != NULL || strstr(input,"talk later") != NULL){
        printf("Good bye! Have a nice day");
    }if (strstr(input,"i need help") != NULL || strstr(input,"i want help") != NULL || strstr (input,"help me") != NULL ||  strstr(input,"help") != NULL)
    {
        printf("sure! tell me what you need help with\n");
    }else if (strstr(input,"when world will distroy") != NULL){
        printf("Accordig to times of india ! the world will distroy in 2026 \n");
    }if (strstr(input,"are you created by") != NULL || strstr(input,"your author") != NULL || strstr(input,"your owner") != NULL)
    {
        printf("i am created by!__ nitin giri\n");
    }else if (strstr(input,"who is the prime minister of india") != NULL||strstr(input,"prime minister of india") != NULL){
        printf("the prime minister of india is __narendra modi\n");
    }if (strstr(input,"who is the first prime minister of india") != NULL || strstr(input,"first prime ministr of india") != NULL){
        printf("first prime minister of india is __Dr. jawaharlal nehru\n");
    }else if (strstr(input,"prime minister of usa") != NULL || strstr(input,"who is the prime minister of america") != NULL || 
    strstr(input,"prime minister of usa") != NULL || strstr(input,"prime minister of america") != NULL|| strstr(input,"america prime minister is") != NULL){
        printf("the prime minister of USA / America is __Donald trump\n");
    }
    
    
     else{
            printf("chatbot: i'm not sure how to respond to that.\n");
        }
        
    
        
    }
    
    
}
        