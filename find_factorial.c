// write a program to find  factorial of a given no.

/*#include <stdio.h>
int main (){
    int n, i;
     long long fact = 1;

     printf("enter your number : ");
     scanf("%d", &n);

     if (n < 0)
     {
        printf("factorianl are does ni exist negative no\n");
    
     }
     for (int i = 1; i <= n; i++)
     {
        fact = fact * i;
        
     }
     printf("the factorial of %d is %d", n,fact);

     return 0;
     
     


}*/
#include <stdio.h>
int main(){
   int n,i,fact = 1;
   printf("enter your no: ");
   scanf("%d",&n);

   if (n <= 0)
   {
      printf("not factorial");
      
   }
   for (int i = 1; i <= n; i++)
   {
      fact = fact*i;
   }
   printf("the factorial of %d is %d",n,fact);
   
   return 0;
}

   
