#include<stdio.h>
main()
{
printf ("Order something to eat: \n1.Frenchfries,Rs99\n2.Burger,Rs129\n3.Sandwich,Rs149\n4.Pasta,Rs179\n5.Pizza,Rs239");
int choice=0;
scanf("%d",&choice);
switch(choice)
{
case 1:
       printf("You ordered: \nFood item-Frenchfries\nPrice-Rs99");
       break;
case 2:
       printf("You ordered: \nFood item-Burger\nPrice-Rs129");
       break;
case 3:
       printf("You ordered: \nFood item-Sandwich\nPrice-Rs149");
       break; 
case 4:
       printf("You ordered: \nFood item-Pasta\nPrice-Rs179");
       break; 
case 5:
       printf("You ordered: \nFood item-Pizza\nPrice-Rs239");
       break;
default:
       printf("Invalid choice");
}
return 0;
}
