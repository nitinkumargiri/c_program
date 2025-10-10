#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%n;
}
int greater(char1 ,char2){
    if (char1 == char2){
        return 1;
    }if (char1 == 'r' && char2 == 's'){
        return 1;
    }else{
        return 0;
    }
    if (char1 == 'p' && char2 == 'r'){
        return 1;
    }else{
        return 0;
    }
    if (char1 == 's' && char2 == 'p'){
        return 1;
    }else{
        return 0;
    }
    
    
}
int main(){
    int playerscore = 0 , computerscore = 0 , temp;
    char playerchar , computerchar;
    int dict[] = {'r','p','s'};
    printf("welcom to Rock ,Paper ,Scissor game\n");
    for (int i = 0; i < 3; i++)
    {
        printf("player first turn:\n");   
        printf("chose1.for rock ,2.for paper ,3. for scissor\n");
        scanf("%d",&temp);
        playerchar = dict[temp-1];
        printf("you chose: %c\n\n",playerchar);

        printf("computer turn:\n");
        printf("chose1.for rock ,2.for paper ,3. for scissor\n");
        temp = generaterandomnumber(3) + 1;
        computerchar = dict[temp-1];
        printf("computer chose : %c\n",computerchar);

        if (greater(computerchar ,playerchar) == 1){
            computerscore += 1;
        }else if (greater(computerchar ,playerchar) == -1)
        {
            computerscore += 1;
            playerscore += 1;
            
        }else{
            playerscore += 1;
        }
        
        
    }
    if (playerscore > computerscore)
    {
        printf("you win...\n");
    }else if (playerscore < computerscore)
    {
        printf("cpu is win...\n");
        /* code */
    }else{
        printf("it's a draw....\n");
    }
    
    
    return 0;
}      
