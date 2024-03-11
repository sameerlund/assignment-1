#include <stdio.h>
float bill(int quantity,float amount){
float bill=quantity*amount;
printf("bill is %.2f",bill);

return bill;
}
int main(){
    printf("1:espreso\n");
    printf("2:latte:\n");
    printf("cappuccino\n");
    printf("mocha:\n");
    printf("americano:\n");
int espresso,latte,cappuccino,mocha,americano;
int choice,quantity;
float amount;

printf("welcome to coffee shop!\n");
printf("enter your choice:");
scanf("%d",&choice);
printf("enter the quantity:");
scanf("%d",&quantity);
printf("enter amount of cofee:");
scanf("%f",&amount);
switch(choice){
case 1:
printf("1.espresso-$2.5\n");
break;
case 2:
printf("2.latte-$3\n");
break;
case 3:
printf("3.cappuccino-$3.5\n");
break;
case 4:
printf("4.mocha-$4.00\n");
break;
case 5:
printf("5.americano-$2.25\n");
break;
default:
printf("invalid choice");
}

float result;
result=bill(quantity,amount);
}