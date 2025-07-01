#include <stdio.h>
#include<string.h>
int main()
{
    //shopping cart
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item are you buying: ");
    fgets(item, sizeof(item), stdin);

    //this sets the last character of the string as a null terminator so that when it is printed the extra linebreak doesn't get shown
    item[strlen(item)-1] ='\0';

    printf("What is the price for each: ");
    scanf("%f", &price);


    printf("How many would you like: ");
    scanf("%d", &quantity);

    printf("You have bought %d %s\n", quantity, item);

    total = quantity * price;
    printf("The total is:%c%.2f ",currency,total);
    

    return 0;
}