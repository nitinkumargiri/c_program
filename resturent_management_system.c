#include <stdio.h>
#include <string.h>

int main() {
    char item[20];
    char choice[5];
    int total_amount = 0;

    printf("###__WELCOME TO OUR C RESTAURANT__###\n\n");
    printf("Owner :- नितिन गिरी\n\n");

    printf("------ MENU ------\n");
    printf("pizza     : Rs 120\n");
    printf("burger    : Rs 40\n");
    printf("coffee    : Rs 60\n");
    printf("salad     : Rs 70\n");
    printf("tea       : Rs 20\n");
    printf("paratha   : Rs 80\n");
    printf("veg       : Rs 150\n");
    printf("non-veg   : Rs 180\n");
    printf("noodles   : Rs 50\n");
    printf("milk      : Rs 30\n");
    printf("juice     : Rs 50\n");

    do {
        printf("\nEnter item name you want to order: ");
        scanf("%s", item);

        if (strcmp(item, "pizza") == 0)
            total_amount += 120;
        else if (strcmp(item, "burger") == 0)
            total_amount += 40;
        else if (strcmp(item, "coffee") == 0)
            total_amount += 60;
        else if (strcmp(item, "salad") == 0)
            total_amount += 70;
        else if (strcmp(item, "tea") == 0)
            total_amount += 20;
        else if (strcmp(item, "paratha") == 0)
            total_amount += 80;
        else if (strcmp(item, "veg") == 0)
            total_amount += 150;
        else if (strcmp(item, "non-veg") == 0)
            total_amount += 180;
        else if (strcmp(item, "noodles") == 0)
            total_amount += 50;
        else if (strcmp(item, "milk") == 0)
            total_amount += 30;
        else if (strcmp(item, "juice") == 0)
            total_amount += 50;
        else
            printf("Sorry, this item is not available.\n");

        printf("Do you want to add another item? (yes/no): ");
        scanf("%s", choice);

    } while (strcmp(choice, "yes") == 0);

    printf("\nTotal amount to pay: Rs %d\n", total_amount);
    printf("Thank you for visiting !\n");

    return 0;
}

