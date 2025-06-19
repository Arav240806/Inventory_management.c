#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct display_product{
int product_no;
int Quantity;
int price;
char update_product[10];
char product_name[30];
} Item ;
int main()
{
char buisness_name[50];
char buisness_type[50];
Item item;
printf("Welcome to the Inventory Management System\n");
printf("Enter Buisness Name:\n");
scanf("%s",buisness_name);
printf("Enter Buisness Type(Manufacturers/Distributors)\n");
scanf("%s",buisness_type);
printf("Product name\n");
scanf("%s",item.product_name);


printf("No of product\n");
scanf("%d",&item.product_no);


printf("Product Quantity\n");
scanf("%d",&item.Quantity);

printf("Product price\n");
scanf("%d",&item.price);

if(item.Quantity<=0)
{
printf("Not Available\n");
}
else{
printf("Available\n");
}


char action[10];
printf("Do you want to edit or continue\n");
scanf("%s",action);
if(strcmp(action,"edit")==0){
printf("You choose edit option");
}
else if (strcmp(action,"continue")==0){
printf("You choose continue option");
}
else{
printf("Exit Program\n");
printf("Thank you\n");
exit(0);
}

return 0;
}
