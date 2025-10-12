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
int main(){
int num = 2;
int the = 3;
int four = 4;
int five = 5;
int six = 6;
int num1 = 10;
printf("table of %d\n",num);
for (int i = 1; i < num1; i++)
{ 
    printf("%d * %d = %d\n", num,i, num * i);
    /* code */
}
for (int i = 1; i < num1; i++)
{
    printf("%d * %d = %d\n",the,i, the * i);
    /* code */
}
for (int i = 1; i < num1; i++)
{
    printf("%d * %d = %d\n", four ,i,four * i);
    /* code */
}
for (int i = 1; i < num1; i++)
{
    printf("%d * %d = %d\n",five,i, five * i);
    /* code */
}
for (int i = 1; i < num1; i++)
{
    printf("%d * %d = %d\n",six,i, six * i);
    /* code */
}




return 0;

}